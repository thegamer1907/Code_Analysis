#include <bits/stdc++.h>

using namespace std;

#define FOR(i,f,t) for(int i=(int)f; i<(int)t; i++)
#define FORR(i,f,t) for(int i=(int)f; i>(int)t; i--)
#define ms(obj, val) memset(obj, val, sizeof(obj))
#define pb push_back
#define SYNC ios_base::sync_with_stdio(false)
#define st(v) sort(v.begin(),v.end());
#define F first
#define S second
#define ri(x) scanf("%d",&x)
#define rii(x,y) scanf("%d %d",&x,&y)
#define riii(x,y,z) scanf("%d %d %d",&x,&y,&z)
#define lri(x) scanf("%lld",&x)
#define lrii(x,y) scanf("%lld %lld",&x,&y)
#define lriii(x,y,z) scanf("%lld %lld %lld",&x,&y,&z)

typedef vector<int> vi;
typedef long long ll;
typedef pair<int, int> ii;

const int MAXN = 5e5; //AREGLAAAAAAAAR!!!!
vector<string>v;
int main(){
	SYNC;
	string s;
	cin>>s;
	int n;
	cin>>n;
	FOR(i,0,n){
		string r;
		cin>>r;
		v.pb(r);
	}
	FOR(i,0,n){
		if(v[i]==s){
			cout<<"YES"<<endl;
			return 0;
		}
	}
	FOR(i,0,n){
		FOR(j,0,n){
			if(v[i][1]==s[0] && v[j][0]==s[1]){
				cout<<"YES"<<endl;
				return 0;
			}	
		}
	}
	cout<<"NO"<<endl;
	return 0;
}
