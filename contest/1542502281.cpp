#include <bits/stdc++.h>
using namespace std;
#define scd(t) scanf("%d",&t)
#define scld(t) scanf("%ld",&t)
#define sclld(t) scanf("%lld",&t)
#define scc(t) scanf("%c",&t)
#define scs(t) scanf("%s",t)
#define scf(t) scanf("%f",&t)
#define sclf(t) scanf("%lf",&t)
#define MEM(a, b) memset(a, (b), sizeof(a))
#define ffor(i, j, k, in) for (int i=j ; i<k ; i+=in)
#define rfor(i, j, k, in) for (int i=j ; i>=k ; i-=in)
#define rep(i, j) ffor(i, 0, j, 1)
#define rrep(i, j) rfor(i, j, 0, 1)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert( B <= A && A <= C)
#define mp make_pair
#define pb push_back
#define inf (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define read(type) readInt<type>()
#define trace1(x)                     cout <<#x<<": "<<x<< endl;
#define trace2(x, y)                 cout <<#x<<": "<<x<<" | "<<#y<<": "<<y<< endl;
#define trace3(x, y, z)              cout <<#x<<": "<<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl;
#define trace4(a, b, c, d)           cout <<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl;
#define trace5(a, b, c, d, e)        cout <<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<<": "<<e<<endl;
const double pi=acos(-1.0);
typedef pair<long long int,long long int> pii;
typedef long long ll;
typedef vector<long long int> vi;
typedef vector<string> vs;
typedef vector<pii> vpii;
typedef vector<vi> vvi;
typedef map<long long int,long long int> mpii;
typedef set<long long int> sei;
typedef multiset<long long int> msei;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll i,j,n,m,h,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    ll ispos=1;
    ll p[12*3600]={0};
    h=h%12;
    m=m%60;
    t1=t1%12;
    t2=t2%12;
    s=s%60;
    p[3600*h+60*m+s]=1;
    p[(3600/5)*m+(60/5)*s]=1;
    p[(3600/5)*s]=1;
    ll maxi,mini;
    maxi=max(t1,t2);
    mini=min(t1,t2);
    ll ispos1=1;
    ll ispos2=1;
    for(i=3600*mini;i<=3600*maxi;i++)
    {
        if(p[i]==1)
        {
            
            ispos1=0;
        }
    }
    for(i=3600*mini;i>=0;i--)
    {
        if(p[i]==1)
        {
            ispos2=0;
        }
    }
    for(i=3600*maxi;i<12*3600;i++)
    {
        if(p[i]==1)
        {
            ispos2=0;
        }
    }
    if(ispos1==1 || ispos2==1)
        ispos=1;
    else
        ispos=0;
    if(ispos==1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}