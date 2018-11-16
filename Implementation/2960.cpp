#include<bits/stdc++.h>
using namespace std;
#define eps 1e-9
#define For(i,a,b) for(int i=a;i<=b;i++)
#define Fore(i,a,b) for(int i=a;i>=b;i--)
#define lson l,mid,rt<<1
#define rson mid+1,r,rt<<1|1
#define mkp make_pair
#define pb push_back
#define sz size()
#define met(a,b) memset(a,b,sizeof(a))
#define iossy ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define fr freopen
#define pi acos(-1.0)
#define Vector Point
#define fir first
#define sec second
#define endl '\n'
typedef pair<int,int> pii;
const long long linf=1LL<<62;
const int iinf=1000000009;
const double dinf=1e15;
const int Mod=1e9+9;
typedef long long ll;
typedef long double ld;
int n;
char s[200];
void solve(){
	iossy;
	cin>>n;
	int ans=0;
	For(i,1,n){
		cin>>s;
		if(s[0]=='T') ans+=4;
		else if(s[0]=='C') ans+=6;
		else if(s[0]=='O') ans+=8;
		else if(s[0]=='D') ans+=12;
		else ans+=20;
	}
	cout<<ans<<endl;
}
int main(){
	int t=1;
	while(t--) solve();
	return 0;
}
