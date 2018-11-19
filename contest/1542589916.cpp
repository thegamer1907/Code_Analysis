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
int main(){
	int H,M,S,a,b;
	cin>>H>>M>>S>>a>>b;
	if(H==12) H = 0;
	int X = 12*60*60;
	int x = S*12*60, y = S*12 + M*12*60, z = S + M*60 + H*60*60;
	if(a>b) swap(a,b);
	a *= 60*60;
	b *= 60*60;
	bool ok = 1;
	for(int i=a;i<b;i++){
		if(i==x || i==y || i==z) ok=0;
	}
	if(ok){
		puts("YES");
		return 0;
	}
	ok = 1;
	for(int i=b;i!=a;i = (i+1)%X){
		if(i==x || i==y || i==z) ok = 0;
	}
	if(ok){
		puts("YES");
		return 0;
	}
	puts("NO");
}
