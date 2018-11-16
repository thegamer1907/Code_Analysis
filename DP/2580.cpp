#include <bits/stdc++.h>
using namespace std;
#define si(x)       scanf("%d",&x)
#define su(x)       scanf("%u",&x)
#define sll(x)      scanf("%lld",&x)
#define sl(x)       scanf("%ld",&x)     
#define sc(x)       scanf("%c",&x)
#define ss(x)       scanf("%s",x)
#define sf(x)       scanf("%f",&x)
#define slf(x)      scanf("%lf",&x)
#define pri(x)      printf("%d\n",x)
#define prl(x)      printf("%lld\n",x)
#define ll          long long int
#define mod(x,n)    (x+n)%n
#define pb          push_back
#define mp          make_pair
#define pii         pair<int,int>
#define pll         pair<long long,long long>
#define pil         pair<int,long long>
#define pli         pair<long long,int>
#define vi          vector<int>
#define vl          vector<long long>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (int)x.size()
#define rep(i,a,b)  for(int i=a;i<=b;i++)
#define rrep(i,a,b) for(int i=a;i>=b;i--)
#define M           1000000009

const int maxn=1e6+100;
int dp[maxn],arr[maxn];

void solve(){
    int n;
    si(n);
    rep(i,1,n){
        si(arr[i]);
    }
    int ans=1;
    dp[1]=1;
    rep(i,2,n){
        if(arr[i]>arr[i-1]){
            dp[i]=1+dp[i-1];
        }
        else{
            dp[i]=1;
        }
        ans=max(ans,dp[i]);
    }

    pri(ans);
}

int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    //cout.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t=1;
    //si(t);
    while(t--){
        solve();

    }
    
    return 0;
}