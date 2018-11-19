#include "iostream"
#include "iomanip"
#include "string.h"
#include "stack"
#include "queue"
#include "string"
#include "vector"
#include "set"
#include "map"
#include "algorithm"
#include "stdio.h"
#include "math.h"
#pragma comment(linker, "/STACK:102400000,102400000")
#define bug(x) cout<<x<<" "<<"UUUUU"<<endl;
#define mem(a,x) memset(a,x,sizeof(a))
#define step(x) fixed<< setprecision(x)<<
#define mp(x,y) make_pair(x,y)
#define pb(x) push_back(x)
#define ll long long
#define endl ("\n")
#define ft first
#define sd second
#define lrt (rt<<1)
#define rrt (rt<<1|1)
using namespace std;
const ll mod=1e9+7;
const ll INF = 1e18+1LL;
const int inf = 1e9+1e8;
const double PI=acos(-1.0);
const int N=1e5+100;

int K[205],k,a,b,n,m;
vector<int> vex[205];
string s[205],ss;
char sx[205];

void fun0(int x, int t){
    int p=0;
    while(x>0){
        sx[p++]=(x&1)+'0';
        x>>=1;
    }
    for(int i=p; i<t; ++i) sx[i]='0';
    sx[t]='\0';
}

bool fun(int x, int t){
    for(int i=0; i<=(1<<x)-1; ++i){
        fun0(i,x); ss=sx; //cout<<i<<" "<<ss<<endl;
        if(s[t].find(ss)==-1) return 0;
    }
    return 1;
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    cin>>n; mem(K,-1);
    for(int i=1; i<=n; ++i){
        cin>>s[i]; vex[i].pb(i);
    }
    cin>>m;
    for(int i=1; i<=m; ++i){
        cin>>a>>b; k=0;
        s[n+i]=s[a]+s[b];
        if(s[n+i].length()>1000)
            s[n+i]=s[n+i].substr(0,500)+s[n+i].substr(s[n+i].length()-500,500);
        if(K[a]!=-1 || K[b]!=-1) k=max(K[a], K[b]); //cout<<k<<endl;
        for(int t=k+1; t<=10; ++t){
            if(fun(t, n+i)) k=t;
            else break;
        }
        K[n+i]=k;
        cout<<k<<endl;
    }   
    return 0;
}


/*
int f[20], bit[N][5], n, k;
int bt1[10], bt2[10];
int fun(int t){
    int ret=0;
    for(int i=k-1,bi=1; i>=0; --i){
        ret+=bi*bit[t][i];
        bi<<=1;
    }
    return ret;
}

void fun1(int x){
    int p=0;
    while(x>0){
        bt1[p++]=x&1;
        x>>=1;
    }
}

void fun2(int x){
    int p=0;
    while(x>0){
        bt2[p++]=x&1;
        x>>=1;
    }
}
int main(){
    cin>>n>>k;
    for(int i=1; i<=n; ++i){
        for(int j=0; j<k; ++j){
            cin>>bit[i][j];
        }
        f[fun(i)]=1; //cout<<fun(i)<<endl;
    }
    for(int i=0; i<=(1<<(k+1)-1); ++i){
        if(!f[i]) continue;
        fun1(i);
        for(int j=0; j<=(1<<(k+1)-1); ++j){
            if(!f[j]) continue;
            fun2(j); int f=1;
            for(int t=0; t<k; ++t){
                if(bt1[t]==1 && bt2[t]==1){
                    f=0; break;
                }
            }
            if(f){//cout<<i<<" "<<j<<endl;
                cout<<"YES\n";
                return 0;
            }
        }
    }
    cout<<"NO\n";
    return 0;
}
*/


/*
double hh,mm,ss,t1,t2;
int main(){
    cin>>hh>>mm>>ss>>t1>>t2;
    int f=0;
    if(t2<t1) swap(t1,t2);
    hh+=mm/60+ss/(60*60), mm+=ss/60;
    hh*=5, t1*=5, t2*=5;
    if(hh>=60) hh-=60;
    if(mm>=60) mm-=60;
    if(hh>=t1 && hh<=t2 && ss>=t1 && ss<=t2 && mm>=t1 && mm<=t2){
        cout<<"YES\n";
        return 0;
    }
    if(((mm>=t2 && mm<=60) || (mm>=0 && mm<=t1))&&((hh>=t2 && hh<=60) || (hh>=0 && hh<=t1)) && ((ss>=t2 && ss<=60) || (ss>=0 && ss<=t1)) ){
        cout<<"YES\n";
        return 0;
    }
    //cout<<hh<<" "<<mm<<" "<<ss<<" "<<t1<<" "<<t2<<endl;
    cout<<"NO\n";
    return 0;
}
*/


/*
char a,b,s[105],t[105];
int n;
int main(){
    cin>>a>>b>>n;
    for(int i=1; i<=n; ++i){
        cin>>s[i]>>t[i];
    }
    int f1=0, f2=0;
    for(int i=1; i<=n; ++i){
        if(t[i]==a) f1=1;
        if(s[i]==b) f2=1;
        if(s[i]==a && t[i]==b){
            cout<<"YES\n";
            return 0;
        }
    }
    if(f1==1 && f2==1) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}

*/

/*
ll dp[15][15],bit[15];

ll dfs(int limit, int pos, int now, int lead, int zero){
    if(pos==-1&&lead) return 1;
    if(pos==-1) return zero;
    if(!limit && dp[pos][now]!=-1) return dp[pos][now];
    int up=limit?bit[pos]:9;
    ll ans=0;
    for(int i=0; i<=up; ++i){
        ans+=dfs(limit&&i==bit[pos], pos-1, zero, lead&&i==0, zero+(lead==0));
    }
    if(!limit) dp[pos][now]=ans;
    return ans;
}

ll solve(ll x){
    int p=0;
    while(x>0){
        bit[p++]=x%10;
        x/=10;
    }
    return dfs(1,p-1,0,1,0);
}

int main(){
    ll a,b; mem(dp,-1);
    while(scanf("%lld%lld",&a,&b)==2){
        printf("%lld\n",solve(b)-solve(a-1));
    }
    return 0;
}
*/
