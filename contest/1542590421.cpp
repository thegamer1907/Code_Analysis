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

char pass[105];
int n;
char str[105][5];
int used1[100],used2[100];

int main()
{
    while(scanf("%s",pass)!=EOF)
    {
        memset(used1,0,sizeof(used1));
        memset(used2,0,sizeof(used2));
        scanf("%d",&n);
        int flag=0;
        for(int i=1;i<=n;i++)
        {
            scanf("%s",str[i]);
            if(strcmp(str[i],pass)==0)
                flag=1;
            used1[str[i][0]-'a']++;
            used2[str[i][1]-'a']++;
        }
        if(flag)
        {
            printf("YES\n");
            continue;
        }
        if(used2[pass[0]-'a']&&used1[pass[1]-'a'])
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
//std::ios::sync_with_stdio(false);
