#include<map>
#include<set>
#include<cmath>
#include<queue>
#include<stack>
#include<ctime>
#include<cstdio>
#include<vector>
#include<bitset>
#include<cstdlib>
#include<cstring>
#include<iostream>
#include<algorithm>
//#include<random>
//#include<unordered_map>

#define LL long long
#define UI unsigned int
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define all(x) (x).begin(),(x).end()
#define PLL pair<LL,LL>
#define PII pair<int,int>

using namespace std;

int gcd(int x,int y){   if(y==0)return x;   return gcd(y,x%y);  }
int lcm(int x,int y){   return x/gcd(x,y)*y;    }
int lowbit(int x){  return x&(-x);  }
LL quickmod(LL x,LL y,LL mod){x=x%mod;LL ans=1;while(y){if(y&1)ans=ans*x%mod;y>>=1;x=x*x%mod;}return ans;}

const int INF = 0x3f3f3f3f;
const double EPS = 1e-7;
const double PI = acos(-1.0);
const int MOD = 1e9+7;

int n,k;
struct NUM
{
    int v[4];
}num[100005];
int used[100];

int main()
{
    while(scanf("%d%d",&n,&k)!=EOF)
    {
        memset(used,0,sizeof(used));
        for(int i=1;i<=n;i++)
        {
            int temp=0;
            for(int j=1;j<=k;j++)
            {
                scanf("%d",&num[i].v[j]);
                if(num[i].v[j])
                    temp=temp|(1<<(j-1));
            }
            used[temp]++;
        }
        int cnt=(1<<k);
        int flag=0;
        for(int i=0;i<cnt;i++)
        {
            for(int j=0;j<cnt;j++)
            {
                if(used[i]&&used[j]&&(i&j)==0)
                    flag=1;
            }
        }
        if(flag)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
//std::ios::sync_with_stdio(false);
