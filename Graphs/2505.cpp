#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define fi first
#define se second
#define mk make_pair
#define pb push_back
#define ls l,mid,rt<<1
#define rs mid+1,r,rt<<1|1
#define de(x) cout<< #x<<" = "<<x<<endl
#define dd(x) cout<< #x<<" = "<<x<<" "
#define sf scanf
#define pf printf

__inline int read(){
    char c=getchar();int x=0,f=1;
    while(c<'0'||c>'9'){if(c=='-')f=-1;c=getchar();}
    while(c>='0'&&c<='9'){x=x*10+c-'0';c=getchar();}
    return x*f;
}

__inline string next_line(){
	const int SIZE=1100000;static char buf[SIZE+1];static int p=SIZE;
	string res;int f=1;
	while((p<SIZE||(p=0,buf[fread(buf,1,SIZE,stdin)]=0,buf[0]))&&(buf[p]!='\n'&&(res+=buf[p],f=0,1)||f))++p;
	return res;
}

typedef long long ll;
typedef long double ld;
const int INF=0x3f3f3f3f;
const double eps=1e-8;
const double PI=acos(-1.0);
const int MAXN=1e5+5;
const int MOD=1e9+7;

int sgn(double x){
    if(fabs(x)<eps)return 0;
    if(x<0)return -1;
    else return 1;
}

int n,ans,c[MAXN];
vector<int>G[MAXN];

void dfs(int u){
    for(int i=0;i<G[u].size();i++){
        int v=G[u][i];
        if(c[v]!=c[u])ans++;
        dfs(v);
    }
}

int main(){
    sf("%d",&n);
    for(int i=2,p;i<=n;i++){
        sf("%d",&p);
        G[p].pb(i);
    }
    for(int i=1;i<=n;i++)sf("%d",&c[i]);
    ans=1;dfs(1);
    pf("%d\n",ans);
}
