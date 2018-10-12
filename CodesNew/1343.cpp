#include<bits/stdc++.h>
using namespace std;
#define X           first
#define Y           second
#define N           200005
#define pb          push_back
#define pp          pop_back
#define mk          make_pair
#define PI          acos(-1)
#define EPS         1e-9
#define INF         1<<25
#define ln          '\n'
#define sp          ' '
#define redian      180/PI
#define all(x)      x.begin(),x.end()
#define Sort(x)     sort(all(x))
#define mem(a,b)    memset(a,b,sizeof(a))
#define lpa(p,v)    for(auto p:(v))
#define lp(a,b,c)   for(int a=(b);a<(c);a++)
#define lp0(a,n)    lp(a,0,n)
#define lpr(a,b,c)  for(int a=(b);a>=(c);a--)
#define faster      ios_base::sync_with_stdio(0);cin.tie(0);
#define debug(a)    cout<<a<<ln;
#define debug1(a,b)    cout<<a<<sp<<b<<ln;

const int MOD=1e9+7;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<string> vs;
typedef pair<int,int> pii;
typedef pair<int,string> psi;
typedef map<int,int>mii;
inline bool sc(int &_x){return scanf("%d",&_x)==1;}
inline bool sc(int &_x, int &_y){return sc(_x)&&sc(_y);}
inline bool sc(int &_x, int &_y, int &_z){return sc(_x)&&sc(_y)&&sc(_z);}
inline bool sc(int &_x, int &_y, int &_z, int &_zz){return sc(_x)&&sc(_y)&&sc(_z)&&sc(_zz);}
/*
int x4[]= {1,-1,0,0};
int y4[]= {0,0,1,-1};
int x8[]= {0,0,+1,-1,-1,+1,-1,+1};
int y8[]= {-1,+1,0,0,+1,+1,-1,-1};
int kx[]= {2,2,-2,-2,1,-1,1,-1};
int ky[]= {1,-1,1,-1,2,2,-2,-2};  */
ll a[255]={};
ll nb,ns,nc,pb,ps,pc;
string bsc;
ll t;
ll solve(ll m)
{
    ll ndb=max(0ll,a['B']*m-nb);
    ll nds=max(0ll,a['S']*m-ns);
    ll ndc=max(0ll,a['C']*m-nc);
    ll c=ndb*pb+nds*ps+ndc*pc;
    if(c>t)return -1;
    return c;

}
ll bs()
{
    ll l=0,h=1e15,m,high=0;
    while(l<=h)
    {
        m=(l+h)/2;
        ll x=solve(m);
        if(x==-1) h=m-1;
        else{
                high=m;
                l=m+1;
            }
    }
    return high;
}
int main()
{
    faster
    cin>>bsc;
    cin>>nb>>ns>>nc>>pb>>ps>>pc;
    cin>>t;

    lp0(i,bsc.size())
        a[bsc[i]]++;
    cout<<bs();
}



