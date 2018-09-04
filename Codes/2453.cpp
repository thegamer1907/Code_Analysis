#include<bits/stdc++.h>
#define debug(x) cout<<#x<<":  "<<x<<endl;
using namespace std;
typedef long long ll;
#define pii pair<int, int >
#define vii vector<int>
const double eps = 1e-14;
const int maxn = 1E7 + 10;
const int mod = 1E9 + 7;

int dp[maxn]  , cnt[maxn];
int n , m ;

void getprime()
{
    memset(dp , 0 , sizeof dp );
    for(int i = 2 ; i <= maxn ; i++  ){
        if( dp[i] >= 0 ){
            dp[i] = cnt[i];
            for(int j = i + i ; j <= maxn ; j += i ){
                dp[i] += cnt[j];
                dp[j] = -1;
            }
        }
    }
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    for(int i = 0 ; i < n ; i++ ){
        int x;
        cin>>x;
        cnt[x]++;
    }
    getprime();
    cin>>m;
    for(int i = 2 ; i <= maxn ; i++ )
        dp[i] = max( dp[i] , 0 ) + dp[i - 1] ;
    for(int i = 0 ; i < m ; i++ ){
        ll l , r;
        cin>>l>>r;
        r = min( (ll)maxn , r );
        l = min( (ll)maxn , l );
        cout<<dp[r] - dp[l - 1]<<endl;
    }
}
