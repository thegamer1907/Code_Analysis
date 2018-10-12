#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
#define eps 1e-8
#define MAXN (100000+10)
#define MAXM (50000000)
#define Si(a) scanf("%d", &a)
#define Sl(a) scanf("%lld", &a)
#define Sf(a) scanf("%lf", &a)
#define Ss(a) scanf("%s", a)
#define Sc(a) scanf(" %c", &a)
#define Pi(a) printf("%d\n", (a))
#define Pf(a) printf("%lf\n", (a))
#define Pl(a) printf("%lld\n", (a))
#define Ps(a) printf("%s\n", (a))
#define MOD 1000000007
#define LL long long
#define lson  l, mid, o<<1
#define rson mid+1, r, o<<1|1
#define lowbits(x) (x & -x)
using namespace std;
vector<string> a;
vector<string> b;
bool a1[2000] = {0};
bool b1[2000] = {0};
set<string> mp;
int main(void)
{
    int M, N;
    char s[700];
    while(scanf("%d%d", &N, &M) != EOF)
    {
        int c=0;
        for(int i=0; i<N; i++)
        {
            scanf("%s",s);
            mp.insert(s);
        }
        for(int i=0; i<M; i++)
        {
            scanf("%s", s);
            c+=mp.count(s);
        }
        if(N-M>0 || N>=M && c%2)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

