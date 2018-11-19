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

double h,m,s;
double t1,t2;
int main()
{
    while(scanf("%lf%lf%lf%lf%lf",&h,&m,&s,&t1,&t2)!=EOF)
    {
        if(fabs(h-12.0)<EPS) h=0;
        if(fabs(t1-12.0)<EPS) t1=0;
        if(fabs(t2-12.0)<EPS) t2=0;
        t1*=5.0; t2*=5.0;
        m=m+s/60.0;
        h=5*h+m/12.0;
        int cnt1=0;
        int cnt2=0;
        if(h>m) swap(h,m);
        if(h>s) swap(h,s);
        if(m>s) swap(m,s);
        if(t1>h&&t1<m)
            cnt1=1;
        else if(t1>m&&t1<s)
            cnt1=2;
        else
            cnt1=3;
        if(t2>h&&t2<m)
            cnt2=1;
        else if(t2>m&&t2<s)
            cnt2=2;
        else
            cnt2=3;
        //printf("%d %d\n",cnt1,cnt2);
        if(cnt1==cnt2)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
//std::ios::sync_with_stdio(false);
