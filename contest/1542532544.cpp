/*In The Name of GOD*/
#include <bits/stdc++.h>
#define pb push_back
#define F first
#define S second
#define lb lower_bound
#define ub upper_bound
#define ashar fixed << setprecision(15)
using namespace std;
typedef long long ll;
typedef long double D;
typedef pair<ll,ll> pii;
//ifstream fin ("test.in");
//ofstream fout ("test.out");

const int N = 1e6+10;

vector <int> vc;

bool mrk[500];

int main() 
{
    ios_base::sync_with_stdio(false);
	
	int n, k;
	cin >> n >> k;
	
	for(int i = 0; i < n; i++){
		int num = 0;
		for(int j = k-1; j >= 0; j--){
			bool x;
			cin >> x,  num += x*(1<<j);
		}
		
		if(!mrk[num])
			mrk[num] = true,  vc.pb(num);
	}
	
	if(mrk[0])
		return cout << "Yes", 0;
		
	for(int i = 0 ; i < vc.size(); i++)
		for(int j = i+1; j < vc.size(); j++)
			if(!(vc[i]&vc[j]))
				return cout << "Yes", 0;
	
	cout << "No";
	
	return 0;			
}