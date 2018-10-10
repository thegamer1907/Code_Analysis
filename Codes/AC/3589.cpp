#include <bits/stdc++.h>
#define  pb push_back
#define  pf push_front
#define  S second
#define  F first
#define ra ragham
#define ll long long
//#define int long long
using namespace std;
typedef pair<ll,ll> pii ;
typedef pair<int,char> cii ;
typedef pair<ll,pii> piii ;
//setprecision(8)
//ios_base::sync_with_stdio(false);
//ifstream fin ("in.txt");
//ofstream fout ("out.txt");
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
const int maxn = 2e5+100;
ll n , m , k , x , s ;
ll a[maxn];
ll ha[maxn];
ll b[maxn];
ll hb[maxn];
ll maxb[maxn];
ll ans = 9000000000000000000 ;
void dob(ll i,  ll j , ll w , ll q)
{

    if(i+1==j)
    {
        ans = min(ans , (n-b[i])*q);
        return ;
    }
    ll mid = (i+j)/2;
    if(hb[mid]<=w)
        dob(mid , j , w , q);
    else
        dob(i , mid , w , q);
}
int main()
{
   cin >> n >> m >> k >> x >> s ;
   for(ll y= 1; y <= m; y++)
    cin >> a[y] ;
   for(ll y= 1; y <= m; y++)
    cin >> ha[y] ;
   for(ll y= 1; y <= k; y++)
    cin >> b[y] ;
   for(ll y= 1; y <= k; y++)
    cin >> hb[y] ;
    a[m+1]=x;
    m++;
    for(ll y= 1;  y <= m ; y++)
    {
        if(s - ha[y]>= 0)
        {
            dob (0 , k+1 , s-ha[y] , a[y] );
        }
    }
    cout<<ans;
}
