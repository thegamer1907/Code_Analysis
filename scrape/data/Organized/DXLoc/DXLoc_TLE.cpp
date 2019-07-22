#include <bits/stdc++.h>

using namespace std;

#define For(i,a,b) for(int i=a;i<=b;i++)
#define Ford(i,a,b) for(int i=a;i>=b;i--)
#define ull unsigned long long
#define ll long long
#define ii pair<int,int>
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define TASK "573Div2C"
const ll oo = 1e15+7 ;
const ll mod = 1e9+7 ;
const int N = 1e5+7 ;
int m ;
ll n,k ;
ll a[N] ;
void Input()
{
    cin >> n >> m >> k ;
    For(i,1,m)
        cin >> a[i] ;
    return ;
}
void Solve()
{
    sort(a+1,a+m+1) ;
    int i = 1 ;
    ll bu= 0 ;
    ll cnt = 0 ;
    while(i <= m)
    {
        int page = (a[i]-bu-1)/k ;
        //cout << page << " " << a[i] << " " ;
        int x = upper_bound(a+i,a+m+1,k*(page+1)+bu)-a-1 ;
        //cout << x-i+1 << "\n" ;
        bu += x-i+1 ;
        cnt++ ;
        i = x+1 ;
    }
    cout << cnt ;
}
int main()
{
    //freopen(TASK".INP","r",stdin) ;
    //freopen(TASK".OUT","w",stdout) ;
    ios_base::sync_with_stdio(0) ;
    cin.tie(NULL) ;
    cout.tie(NULL) ;
    Input() ;
    Solve() ;
    return 0;
}