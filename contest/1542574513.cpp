#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=(a),i##_end=(b);i<=i##_end;i++)
#define per(i,b,a) for(int i=(b),i##_st=(a);i>=i##_st;i--)
#define x first
#define y second
#define pb push_back
#define mp make_pair
#define debug(x) cerr<<#x" = "<<x<<endl
#define Debug(...) fprintf(stderr, __VA_ARGS__)
#define Es(x,i) for(Edge *i=G[x];i;i=i->nxt)
typedef pair<int,int> pii;
typedef long long ll;
const int inf=~0u>>1,MOD=1e9+7;/*
char *TT,*mo,but[(1<<15)+2];
#define getchar() ((TT==mo&&(mo=((TT=but)+fread(but,1,1<<15,stdin)),TT==mo))?-1:*TT++)//*/
inline int rd() {
	int x,c,f=1;while(!isdigit(c=getchar()))f=c!='-';x=c-'0';
	while(isdigit(c=getchar()))x=x*10+c-'0';return f?x:-x;
}
const int N=1e5+5;
bool vis[16514];
bool judge(int x){
	per(i,x,1)if(vis[i] && ((x^i)|x)==x) return 1;
	return 0;
}
int main(){
	int n=rd(),k=rd();
	rep(i,1,n){
		int res=0,tmp=0;
		rep(j,1,k){
			int x=rd();
			res=res*2+x;
			tmp=tmp*2+(x?0:1);
		}
		//cout<<res<<" "<<tmp<<endl;
		if(res==0||judge(tmp)){
			puts("YES");
			return 0;
		}else vis[res]=1;
	}
	puts("NO");
}
