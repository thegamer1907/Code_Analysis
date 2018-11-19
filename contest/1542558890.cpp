#include <bits/stdc++.h>
 
using namespace std;
//using namespace __gnu_pbds;
 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
 
#define FOR(i, a, b) for (int i=a; i<b; i++)
#define F0R(i, a) for (int i=0; i<a; i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)
 
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
 
const int MOD = 1000000007;
double PI = 4*atan(1);
 
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	char one,two; cin>>one>>two; int n; cin>>n;
	char data[n][2];
	F0R(i,n){
		cin>>data[i][0]>>data[i][1];
		
	}
	F0R(o,n){
		if(data[o][0]==one && data[o][1]==two){cout<<"YES";return 0;}
	}
	F0R(o,n){
		F0R(t,n){
			if(data[o][1]==one && data[t][0]==two ){
				cout<<"YES"; return 0;
			}
		}
	}
	cout<<"NO";
	
}