#include <iostream>
#include<algorithm>
#include<iomanip>
#include<string.h>
#include<unordered_map>
#include<map>
#include<cmath>
#include<vector>
#include<iomanip>
#include<queue>
using namespace std;
#define inf 1000000007
#define x first
#define y second
#define ll long long
#define ii pair<ll, ll>
#define vi vector<ll>
#define pb push_back
#include<set>
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
ll n, k, a, b;
ll dp[2002][2002];

int main()
{
    ios
    ll i, j;
    cin>>n>>k;
    for(i=1; i<=n; i++) dp[1][i]= 1;

    for(j=2; j<=k; j++){
        for(i=1; i<=n; i++){
            for(a=i; a<=n; a+= i){
                dp[j][a] = ( dp[j][a] + dp[j-1][i] )%inf;
            }
        }
    }

    ll sum=0;
    for(i=1; i<=n; i++)
        sum = (sum+dp[k][i])%inf;
    cout<<sum%inf;
}
