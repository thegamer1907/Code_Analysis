#include <bits/stdc++.h>

using namespace std;
#define endl "\n"
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define ff first.first
#define fs first.second
typedef long long ll;
typedef unsigned long long ull;

//const ll mod = 1e16+371;
//const ll mod = 1e12+193;
//const int mod = 1e9+7;

const double PI = acos(-1);
const ll mod = 1e9+7;
const int INF = 1e9;
const int MAX=1e5+10, N=1e4+10;


int main(){
	ios_base::sync_with_stdio(0);
	//	cin.tie(0);

	string x;
	while(cin>>x){
		ll nb,ns,nc;
		cin>>nb>>ns>>nc;
		ll pb,ps,pc;
		cin>>pb>>ps>>pc;
		ll r;
		cin>>r;
		ll b=0,s=0,c=0;
		for(int i=0;i<x.length();i++){
			if(x[i]=='B')b++;
			else if(x[i]=='S')s++;
			else if(x[i]=='C')c++;
		}
//		cerr<<b<<" "<<s<<" "<<c<<endl;
		ll ans=0;
		if(b&&s&&c){
			ll mi=min(nb/b,min(ns/s,nc/c));
			ans+=mi;
			nb-=mi*b;
			ns-=mi*s;
			nc-=mi*c;
		}
//		cerr<<ans<<endl;
		int cnt=0;
		while((b&&nb)||(s&&ns)||(c&&nc)){
//			if(cnt++<50)cerr<<nb<<" "<<ns<<" "<<nc<<endl;
			if(nb<b){
				if(r>=(b-nb)*pb){
					r-=(b-nb)*pb;
					nb=b;
				}
			}
			if(ns<s){
				if(r>=(s-ns)*ps){
					r-=(s-ns)*ps;
					ns=s;
				}
			}
			if(nc<c){
				if(r>=(c-nc)*pc){
					r-=(c-nc)*pc;
					nc=c;
				}
			}
			if(nb>=b&&ns>=s&&nc>=c)
				nb-=b,ns-=s,nc-=c,ans++;
			else
				break;
//			if(cnt++<50)cerr<<nb<<" "<<ns<<" "<<nc<<endl;
		}
//		cerr<<ans<<endl;
		if(r>=b*pb+s*ps+c*pc)
			ans+=(r/(b*pb+s*ps+c*pc));
		cout<<ans<<endl;
	}


	return 0;
}
