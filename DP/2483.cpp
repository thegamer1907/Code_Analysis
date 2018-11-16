#include <bits/stdc++.h>
#define F first
#define S second
#define all(a) a.begin(),a.end()
#define setDP(arr) memset(arr,-1,sizeof arr)
#define Clear(arr) memset(arr,0,sizeof arr)
#define li(x) x.size()-1
#define oo 2000000000
#define inf 1000000000000000000
#define M 1000000007
typedef long long ll;
using namespace std;
const int N =1e5+10;
const int SQRTN = 320;
const int LOGN = 20;
const double PI = acos(-1);
const double Tau = 2*acos(-1);

ll t , k,dp[N],a,b;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("in.txt","r",stdin);
    #endif
    cin >> t >> k;
    for(int i = 0 ; i < k ; i++)dp[i]=1;
    for(int i = k ; i < N ; i++)dp[i]=(1LL*dp[i-1]+1LL*dp[i-k])%M;
    for(int i = 1 ; i < N ; i++)dp[i]+=dp[i-1]+M;
    for(int i = 1 ; i < N ; i++)dp[i]%=M;
    while(t--)scanf("%lld%lld",&a,&b),printf("%lld\n",(dp[b]-dp[a-1]+M)%M);
}