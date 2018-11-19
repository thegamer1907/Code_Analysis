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
	string s;
	string t[100];
	cin>>s;
	int N;
	cin>>N;
	rep(i,N){
		cin>>t[i];
	}
	rep(i,N){
		if(s == t[i]){
			puts("YES");
			return 0;
		}
	}
	rep(i,N) rep(j,N){
		if(s[0]==t[i][1] && s[1]==t[j][0]){
			puts("YES");
			return 0;
		}
	}
	puts("NO");
}
