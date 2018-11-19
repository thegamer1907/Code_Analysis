#pragma comment(linker,"/STACK:102400000,102400000")
#include <bits/stdc++.h>
using namespace std;
#define mem(a,b) memset(a,b,sizeof(a))
#define rep(i,l,r) for(int i=l,ed=r;i<ed;++i)
#define per(i,l,r) for(int i=r-1,ed=l;i>=ed;--i)
#define all(x) (x).begin(),(x).end()
#define SZ(x) ((int)(x).size())

#define db(x) cout<< #x <<"="<<(x)<<" "
const int N = 233;
int n,m;
struct str{
	static const int K = 10;
	static const int SIZE = 1 << K + 1;
	string pre, suf;
	bitset<SIZE> b;
	void adjust(){
		if(SZ(pre)>K)pre=pre.substr(0,K);
		if(SZ(suf)>K)suf=suf.substr(SZ(suf)-K,K);
	}
}a[N];
str add(str a,str b){
	str c;
	c.b=a.b|b.b;
	if(SZ(c.pre=a.pre)<str::K)c.pre+=b.pre;
	if(SZ(c.suf=b.suf)<str::K)c.suf=a.suf+b.suf;
	c.adjust();
	string g=a.suf+b.pre;
	rep(i,0,SZ(g)){
		int t=0;
		rep(j,i,SZ(g)){
			t=t<<1|(g[j]-'0');
			int tp=(1<<j-i+1)|t;
			if(tp>=str::SIZE)break;
			c.b[tp]=1;
		}
	}
	return c;
}
int solve(str a){
	per(i,1,str::K+1){
		bool ok=1;
		rep(j,0,1<<i){
			if(!a.b[1<<i|j]){ok=0;break;}
		}
		if(ok)return i;
	}
	return 0;
}
int main(){
#ifndef ONLINE_JUDGE
	freopen("in.txt","r",stdin);
#endif
	ios::sync_with_stdio(false);
	cin>>n;
	rep(i,0,n){
		string s;
		cin>>s;
		a[i].pre=a[i].suf=s;
		rep(j,0,SZ(s)){
			int t=0;
			rep(k,j,SZ(s)){
				t=t<<1|(s[k]-'0');
				int tp=(1<<k-j+1)|t;
				if(tp>=str::SIZE)break;
				a[i].b[tp]=1;
			}
		}
	}
	cin>>m;
	rep(i,0,m){
		int j,k;
		cin>>j>>k;
		a[n]=add(a[j-1],a[k-1]);
		cout<<solve(a[n++])<<endl;
	}
	return 0;
}