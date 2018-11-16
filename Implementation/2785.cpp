#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <map>
#include <stack>
#include <queue>
#include <fstream>
#include <functional>
#include <valarray>
#include <sstream>
#include <iomanip>
//#include <unordered_map>

using namespace std;
typedef long long ll;typedef unsigned long long ull;typedef double md;
typedef vector<ll> vl;typedef vector<int> vi;typedef vector<string> vs;typedef vector<md> vd;
typedef vector<vl> vvl;typedef vector<vi> vvi;typedef vector<vs> vvs;typedef vector<vd> vvd;
typedef pair<ll,ll> pll;typedef pair<int,int> pii;
typedef map<ll,ll> mll;typedef map<int,int> mii;
typedef long double ld;
typedef vector<pii> vpii;


ld pi=4*atanl(1.0);
ld eps=1e-9;
string stringmin="!";
string stringmax="~";
int cnt=0;

#define mp make_pair

#define f1(N) for (auto &i1:N)
#define f2(N) for (auto &i2:N)
#define f3(N) for (auto &i3:N)
#define fi(N) for (int i = 0;i < int(N);++i)
#define fj(N) for (int j = 0;j < int(N);++j)
#define fk(N) for (int k = 0;k < int(N);++k)

double ang1=pi/180;

typedef pair<ld,ld> pdd;
pdd operator-(pdd p1,pdd p2){return pdd(p1.first-p2.first,p1.second-p2.second);}
pdd operator+(pdd p1,pdd p2){return pdd(p1.first+p2.first,p1.second+p2.second);}
ld operator*(pdd p1,pdd p2){return p1.first*p2.first+p1.second*p2.second;}
pdd operator*(ld c,pdd p){return pdd(c*p.first,c*p.second);}
ld operator ++(pdd p){return sqrtl(p.first*p.first+p.second*p.second);}




int main()
{
    ll n;cin>>n;
    vl vec(n);f1(vec)cin>>i1;
    ll mmax=0;f1(vec)mmax=max(mmax,i1);
    ll ans=0;
    f1(vec)ans+=mmax-i1;
    cout<<ans;


    return 0;
}
