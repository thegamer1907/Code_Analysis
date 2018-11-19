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
double hh,mm,ss,t1,t2;
int main(){
    cin>>hh>>mm>>ss>>t1>>t2;
    int f=0;
    //if(mm==0) mm=60;
    //if(ss==0) ss=60;
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
