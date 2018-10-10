//#include <bits/stdc++.h>

#include<cstdio>
#include<cstring>
#include<cctype>
#include<cmath>
#include<cstdlib>

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<bitset>
#include<complex>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;


//4-side
//int xx[] = {0,0,-1,1};
//int yy[] = {-1,1,0,0};
//6-side hexagonal
//int xx[] = {2,-2,1,1,-1,-1};
//int yy[] = {0,0,1,-1,1,-1};

#define popc(a) (__builtin_popcount(a))
//ll bigmod(ll a,ll b,ll m){if(b == 0) return 1%m;ll x = bigmod(a,b/2,m);x = (x * x) % m;if(b % 2 == 1) x = (x * a) % m;return x;}
//ll BigMod(ll B,ll P,ll M){ ll R=1%M; while(P>0) {if(P%2==1){R=(R*B)%M;}P/=2;B=(B*B)%M;} return R;} /// (B^P)%M

#define MX 105
#define inf 100000000

const double pi = acos(-1.0);
const ll mod = 1000000007ll;

ll dp[MX][12][2];

ll func(int len, int sum, int zero)
{
    if(len == 0)
    {
        if(sum == 0)
            return 1;
        return 0;
    }
    if(sum<0)
        return 0;
    ll & res = dp[len][sum][zero];
    if(res != -1)
        return res;
    res = 0;
    for(int i = zero; i <= sum && i <= 9; i++)
        res += func(len-1,sum-i, 0);
    return res;
}

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    memset(dp,-1,sizeof dp);
    int k;
    //printf("%lld\n", func(2,10,1));
    scanf("%d", &k);
    int len = 1;
    for(int i = 1; k>func(i,10,1); i++)
    {
        k -= func(i,10,1);
        len = i;
    }
    len++;
    int sum = 10, zero = 1;
    for(int i = len; i >= 1; i--)
    {
        for(int j = zero; j <= sum && j <= 9; j++)
        {
            if(k>func(i-1,sum-j,0))
            {
                k -= func(i-1,sum-j,0);
            }
            else
            {
                sum -= j;
                printf("%c", '0'+j);
                break;
            }
        }
        zero = 0;
    }
    return 0;
}

