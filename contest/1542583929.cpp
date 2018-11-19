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

int bsr(int x){
	if(x==0) return -1;
	return 31 ^ __builtin_clz(x);
}
bool B(int x,int i){
	return (x>>i)&1;
}

int N;
const int X = 12;
const int MX = 1<<(X+1);
using BS = bitset<MX>;
BS has[1000];
string le[1000],ri[1000];

int sz(int x){
	return le[x].size();
}

BS calchas(string s){
	BS res;
	int N = s.size();
	int I = 2;
	rep1(len,X) rep(b,1<<len){
		string t;
		rep(i,len) t += '0'+B(b,i);
		int M = t.size();
		bool ok = 0;
		rep(i,N-M+1){
			if(s.substr(i,M) == t){
				ok = 1;
				break;
			}
		}
		res[I] = ok;
		I++;
	}
	return res;
}

int main(){
	cin>>N;
	rep(i,N){
		string s;
		cin>>s;
		le[i] = s;
		ri[i] = s;
		has[i] = calchas(s);
	}
	int Q;
	cin>>Q;
	rep(i,Q){
		int id = N+i;
		int x,y;
		cin>>x>>y;
		x--,y--;

		{
			string t = le[x] + le[y];
			le[id] = t.substr(0,X);
		}
		{
			string t = ri[x] + ri[y];
			if(t.size()<=X){
				ri[id] = t;
			}else{
				ri[id] = t.substr(t.size()-X,X);
			}
		}
		{
			string t = ri[x] + le[y];
			has[id] = has[x] | has[y] | calchas(t);
		}
		bool done = 0;
		for(int i=2;i<MX;i++) if(!has[id][i]){
			cout<<bsr(i)-1<<endl;
			done = 1;
			break;
		}
		if(!done){
			cout<<X<<endl;
		}
	}
}
