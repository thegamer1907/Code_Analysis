#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define rep1(i,n) for(int i=1;i<=(int)(n);i++)
#define all(c) c.begin(),c.end()
#define pb push_back
#define fs first
#define sc second
#define show(x) cout << #x << " = " << x << endl
#define chmin(x,y) x=min(x,y)
#define chmax(x,y) x=max(x,y)
using namespace std;
template<class S,class T> ostream& operator<<(ostream& o,const pair<S,T> &p){return o<<"("<<p.fs<<","<<p.sc<<")";}
template<class T> ostream& operator<<(ostream& o,const vector<T> &vc){o<<"sz = "<<vc.size()<<endl<<"[";for(const T& v:vc) o<<v<<",";o<<"]";return o;}
int N,K;
bool is[16];
bool solve(){
	cin>>N>>K;
	rep(i,N){
		int x = 0;
		rep(j,K){
			int s = 0;
			cin>>s;
			x = x*2+s;
		}
		is[x] = 1;
	}
	if(is[0]) return 1;
	rep(i,1<<K) rep(j,1<<K) if(is[i] && is[j]){
		if((i&j)==0) return 1;
	}
	return 0;
}

int main(){
	if(solve()) puts("YES");
	else puts("NO");
}