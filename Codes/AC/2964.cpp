#include <bits/stdc++.h>
#ifdef LOCAL_TEST
  #pragma comment(linker, "/stack:16777216")
#endif

using namespace std;

typedef long long int ll;
typedef vector <ll> vll;
typedef vector <int> vi;
typedef pair<int, int> pp;
typedef vector<pp > vpp;

#define sz(a) (int)((a).size())
#define pb push_back
#define mp(a, b)       (make_pair(a, b) )
#define all(c)        (c).begin(),(c).end()
#define fill(a)       (memset(a, 0, sizeof (a)))
#define fillA(a)       (memset(a, -1, sizeof (a)))
#define trav(a, x) for(auto& a : x)
#define rep(i,n)     for(int i=0;i<(n);++i)
#define repA(i,a,n) for(int i=a;i<=(n);++i)
#define repD(i,a,n) for(int i=a;i>=(n);--i)
const long double PI = 3.141592653589793238462643383;
#define X first
#define Y second
#define endl '\n'

// Functions
struct Rcompare{bool operator()(pp lhs,pp rhs){return lhs.X>rhs.X;}};
struct compare{bool operator()(pp lhs,pp rhs){return lhs.X<rhs.X;}};
// clock_t tm=clock();void fin(){tm=clock()-tm;cerr<<(float)(tm)/CLOCKS_PER_SEC<<"\n";}
ll gcd(ll a,ll b){if (a==0) return b;return gcd(b%a,a);}
ll lcm(ll a,ll b){return a*(b/gcd(a,b));}
ll Abs(ll a){if(a>0)return a;return -a;}
ll Ceil(ll a,ll b){if(a%b==0)return a/b;else return a/b+1;}
double Abs(double a){if(a>0)return a;return -a;}

ll pow(ll x,ll y)
{
  if(y==0)return 1;
  ll tmp=pow(x,y/2);
  if(y%2==1)return ((tmp*tmp)*x);
  return (tmp*tmp);
}
const int MAX = 1000009;
const int MOD = 1e9+7;

int b[MAX]={0};
string s;
void kmpPreprocess() {
  int i = 0, j = -1; b[0] = -1;
  while(i<sz(s))
  {
    while (j>=0&&s[i]!=s[j])j=b[j];
    i++;j++;
    b[i]=j;
  }
}

int cnt[MAX]={0};

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    #ifdef LOCAL_TEST
    ifstream cin("in.txt");ofstream cout("out.txt");//tm=clock();
    #endif

    s="fixfixprefixsuffixfix";
    cin>>s;
    kmpPreprocess();
    // prefix_function();

    repA(i,1,sz(s))cnt[b[i]]++;

    int ind=b[sz(s)];cnt[ind]--;
    while(ind>0&&cnt[ind]<1)
    {
      ind=b[ind];
    }
    if(ind>0)cout<<s.substr(0,ind);
    else cout<<"Just a legend\n";

    // rep(i,sz(s)+1)
    // {
    //   cout<<b[i]<<' ';
    // }cout<<endl;
    // rep(i,sz(s)+1)cout<<i%10<<' ';cout<<endl;

    return 0;
}
