#include <bits/stdc++.h>

#define cic(in,n) for(int i=in;i<n;i++)
#define rep(i,a,n) for(int i=a;i<n;i++)
#define All(a) a.begin(),a.end()
#define PB push_back
#define FIND(m,v) (m.find(v) != m.end())
#define print(n) cout<<n<<endl;
#define WAIT cout << flush,system("pause");

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
const int MAX = 1e6+10, mod = 1e9+7, oo = INT_MAX;

int n, a[MAX];

int main()
{
	ios_base :: sync_with_stdio(0);
	cin.tie();
	string p;
	cin>>p;
	cin>>n;
	vector<string> s;
	rep(i,0,n){
		string aux;
		cin>>aux;
		s.PB(aux);
	}
	rep(i,0,n){
		rep(j,0,n){
			string h = s[i]+s[j];
			rep(k,1,4){
				if(h[k]==p[1] && h[k-1]==p[0]){
					cout<<"YES"<<endl;
					return 0;
				}
			}
		}
	}
	cout<<"NO"<<endl;
	return 0;
}




