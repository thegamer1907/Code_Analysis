#include<bits/stdc++.h>

#define debug(x) cout << #x " = " << (x) << endl
#define mod 1000000007
#define mod2 30000000
#define pa(a,b) make_pair(a,b)
#define f first
#define s second
#define pb(a)  push_back(a)
#define all(a) a.begin() , a.end()
#define mem(a, b) memset(a, b, sizeof(a))
#define eps  1e-9

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

typedef pair<int,int> pii;
typedef vector<int> vec;
typedef vector<pair<int,int> > vecpii;
typedef map<int,int> mpii;

const double pi=3.1415926536;
const int MAXN=2000+10;
const int MOD=1e9+7;
const int oo=2e9;

ll maxx(ll a ,ll b)
{
    return a>b ?  a : b ;

}
ll minn(ll a,ll b)
{
    return a>b ?  b : a ;

}

int dx[]={0,1,0,-1,-1,-1,1,1};
int dy[]={1,0,-1,0,-1,1,-1,1};

void fast()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a , ll b )
{
    return (a*b)/gcd(a , b);
}

ll poww(ll base, ll exp)
{
  base %= mod;
  ll result = 1;
  while (exp > 0) {
    if (exp & 1) result = (result * base) % mod;
    base = (base * base) % mod;
    exp >>= 1;
  }
  return result;
}


ull fact(ull n)
{
	if(n==1 || n==0)
    	return 1;

    return n*fact(n-1);
}

double val(int a,int b)
{
    return sqrt(a*a+b*b);
}
bool sortbysec(const pair<int,int> &a ,const pair<int,int> &b)
{
    return(a.second < b.second);
}

int boys[105]={0},girls[105]={0};

int main(){
    #ifndef LOCAL
    #define endl '\n'
        fast();
        //freopen("input.txt", "r", stdin);
        //freopen("out.txt", "w", stdout);
    #endif

    int b,g,counts=0;

    cin>>b;
    for(int i=0; i<b ;++i)
    {
        cin>>boys[i];
    }

    cin>>g;
    for(int i=0; i<g ;++i)
    {
        cin>>girls[i];
    }

    sort(boys,boys+b);
    sort(girls,girls+g);

    for(int i=0; i<b ;++i)
    {
        for(int j=0; j<g ;++j)
        {
            if(boys[i]-girls[j]==1 ||girls[j]-boys[i]==1 || girls[j]==boys[i])
            {
                counts++;
                girls[j]=-1;
                break;

            }
        }
    }

    cout<<counts<<endl;

    return 0;
}
