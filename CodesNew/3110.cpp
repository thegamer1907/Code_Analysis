
#include <bits/stdc++.h>
#define  pb push_back
#define  pf push_front
#define  S second
#define  F first
#define ra ragham
#define ll long long
#define ld long double
//#define ll int
using namespace std;
typedef pair<ll,ll> pii ;
typedef pair<long double,ll> pldi ;
typedef pair<long double,pii> pldii ;
typedef pair<int,char> cii ;
typedef pair<ll,pii> piii ;
//setprecision(8)
//ios_base::sync_with_stdio(false);
//ifstream fin ("in.txt");
//ofstream fout ("out.txt");
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout;
//string mabda  = "abcdefghijklmnopqrstuvwxyz";
const int maxn = 3e5+100 ;
ll a[maxn] ;
ll pa[maxn] ;
ll b[maxn] ;
pii ans ;
ll n , k ;
void c(ll i , ll j)
{
    if(j > ans.S)
    ans=pii(i,j) ;
}
void dob(ll y ,ll i , ll j)
{
    if(i+1==j)
    {
        if(i==n)
            c(y , n-y+1);
        else if(a[j]==1)
            c(y,i-y+1+b[j]-j+1);
        else
            c(y,i-y+1);

        return ;
    }
    ll mid = (i+j)/2 ;
    if(pa[mid]-pa[y-1]>k)
    {
        dob(y,i,mid);
    }
    else
    {
        dob(y,mid,j);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin>>n>>k;

    for(ll y= 1 ; y <= n; y++)
        cin>>a[y],pa[y]=pa[y-1]+(!a[y]) ;
    for(ll y = n ; y >= 1;  y--)
    {
        if(a[y]!=1)
            continue ;
        if(a[y+1]==1)
        b[y] = b[y+1];
        else
        b[y] = y ;
    }
    for(ll y = 1;  y <= n; y++)
    {
        if(k!=0||a[y]!=0)
        dob(y,y,n+1);
    }

    cout<<ans.S<<endl;
    for(ll y= 1; y<=n;y++)
    {
        if(y<ans.F||a[y]==1)
            cout<<a[y]<<' ';
        else if(k==0)
            cout<<a[y]<<' ';
        else
            cout<<1<<' ',k--;

    }
}


