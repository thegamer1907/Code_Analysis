#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair <int,int> PII;
typedef pair <long long,long long> PLL;

typedef unsigned long long int ULL;
typedef long long int LL;
typedef pair<int,int> pii;
typedef pair<LL,LL> pll;

#define FRE(i,a,b)      for(i = a; i <= b; i++)
#define FRL(i,a,b)      for(i = a; i < b; i++)
#define mem(t, v)       memset ((t) , v, sizeof(t))
#define un(x)           x.erase(unique(all(x)), x.end())
#define sf(n)           scanf("%d", &n)
#define sff(a,b)        scanf("%d %d", &a, &b)
#define sfff(a,b,c)     scanf("%d %d %d", &a, &b, &c)
#define xx              first
#define yy              second

#define si(a)           scanf("%d",&a)
#define sii(a,b)        scanf("%d %d",&a,&b)
#define siii(a,b,c)     scanf("%d %d %d",&a,&b,&c)

#define sl(a)           scanf("%lld",&a)
#define sll(a,b)        scanf("%lld %lld",&a,&b)
#define slll(a,b,c)     scanf("%lld %lld %lld",&a,&b,&c)

#define pb              push_back
#define mp              make_pair
#define all(v)          v.begin(),v.end()
#define D(x)            cerr << #x " = " << x << '\n'
#define DBG             cerr << "Hi!" << '\n'

#define CLR(a)          memset(a,0,sizeof(a))
#define SET(a)          memset(a,-1,sizeof(a))

#define eps             1e-9
#define PI              acos(-1.0)

int setBit(int n,int pos){ return n = n | (1 << pos); }
int resetBit(int n,int pos){ return n = n & ~(1 << pos); }
bool checkBit(int n,int pos){ return (bool)(n & (1 << pos)); }

//int fx[] = {+0, +0, +1, -1, -1, +1, -1, +1};
//int fy[] = {-1, +1, +0, +0, +1, +1, -1, -1}; //Four & Eight Direction

/******************************************************************************************/
#define MAX         1000000
/// z[i] denotes the maximum prefix length of the string which is equal to the prefix of the suffix starting from i.
int z[MAX+10];
void ZFunction(char *s)
{
    int n = strlen(s);
    int L = 0, R = 0;
    for (int i = 1; i < n; i++)
    {
        if (i > R)
        {
            L = R = i;
            while (R < n && s[R-L] == s[R]) R++;
            z[i] = R-L;
            R--;
        }
        else
        {
            int k = i-L;
            if (z[k] < R-i+1) z[i] = z[k];
            else
            {
                L = i;
                while (R < n && s[R-L] == s[R]) R++;
                z[i] = R-L;
                R--;
            }
        }
    }
}

char s[MAX+10];
int freq[MAX+10];
int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int i, j;
    scanf("%s",s);
    ZFunction(s);
    int len = strlen(s);
    for(int i = 0; i<len; i++)
        freq[z[i]]++;
    int ans = 0;
    int mx = 0;
    for(int i = 0; i<len; i++)
    {
        if(z[i] == (len-i) && mx >= z[i])
        {
            for(int j = i; j<len; j++)
                printf("%c",s[j]);
            puts("");
            return 0;
        }
        mx = max(mx, z[i]);
    }
    puts("Just a legend");
    return 0;
}

