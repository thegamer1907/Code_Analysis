// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
typedef vector <ll> vec;
typedef pair <ll, ll> pr;
typedef pair <ll, pr> pr2;
typedef map <ll, vector<ll> > mv;

const int MX = 2e6+10;
const int mod = 1e9 + 7;
const ll inf = 1LL << 62;

int dx4[] = { 0, 0, -1, 1 };
int dy4[] = { 1, -1, 0, 0 };

int dx[] = { 1, 1, 1, 0, 0, -1, -1, -1 };
int dy[] = { 1, 0, -1, 1, -1, 1, 0, -1 };

// TOOLS
#define LCM(a,b)        (a / __gcd(a,b) ) *b
#define gcd(a,b)        __gcd(a,b)
#define all(x)          (x).begin(), (x).end()
#define mem(a, n)       memset(a, n, sizeof(a))
#define for1(i, n)      for(int i=1; i<=n; i++)
#define for0(i, n)      for(int i=0; i<n; i++)
#define rof0(i, n)      for(int i=n-1; i>=0; i--)
#define rof1(i, n)      for(int i=n; i>=1; i--)
#define forab(i, a, b)  for(int i=a; i<=b; i++)
#define rofab(i, a, b)  for(int i=b; i>=a; i--)
#define pb              push_back
#define pbb             pop_back

// CIN/COUT
#define sin(s)          getline(cin, s)
#define case(a)              cout << "Case "<<(a)<<": "

// SCANF/PRINTF
#define fYES            printf("YES\n")
#define fNO             printf("NO\n")
#define Scf(a)          scanf("%lld", &a)
#define Scf2(a, b)      scanf("%lld %lld", &a, &b)
#define Scf3(a, b, c)   scanf("%lld %lld %lld", &a, &b, &c)
#define Scf4(a,b,c,d)   scanf("%lld %lld %lld %lld", &a, &b, &c, &d)
#define Pnf(a)          printf("%lld\n", a)
#define Pnf2(a, b)      printf("%lld %lld\n", a, b)
#define Pnf3(a, b, c)   printf("%lld %lld %lld\n", a, b, c)
#define Bug(n)          printf(">> %lld <<\n", n)

// OTHERS
#define sz(n)          n.size()
#define clr(v)          v.clear()
#define min3(a, b, c)   min(a, min(b, c))
#define max3(a, b, c)   max(a, max(b, c))
#define in              freopen("input.txt", "r", stdin)
#define out             freopen("output.txt", "w", stdout)
#define FastIO          { ios_base::sync_with_stdio(false); cin.tie(0); }
#define F               first
#define S               second
#define mpp             make_pair
//End
map<string,vector<ll> > ms;
vector<string> vs;
map<ll,vector<ll> > mp;
priority_queue<pair<ll,ll> > PQ1;
priority_queue<ll> PQ;
vec v;
int main()
{

    ll n, m, k, q, t, cnt = 0, sum = 0,ans=0, mx = -inf, mn = inf, a, b, c,d,e,f,g,h,i,j ,x, y, z,temp, temp1;
    string s, s1, s2, s3;
    cin>>n;
    for0(i,n)
    {
        cin>>a;
        v.pb(a);
    }
    sort(all(v));
    a=n/2;
    b=a;
    for0(i,a)
    {
        while(1)
        {
            if(v[i]*2<=v[b])
            {
                //cout<<v[i]<<" "<<v[b]<<endl;
                cnt++;
                b++;
                break;
            }
            if(b<n-1)
                b++;
            else
                break;
        }
        if(b>=n)
            break;

    }
    cout<<n-cnt<<endl;

    return 0;
}
