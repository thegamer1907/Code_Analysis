#include<bits/stdc++.h>
using namespace std;
#define For(i,a,b) for(int i=(a),b_=(b);i<=b_;++i)
#define Ford(i,a,b) for(int i=(a),b_=(b);i>=b_;--i)
#define F first
#define S second
#define PB push_back
#define PF push_front
#define TR(c, it) for(__typeof((c).begin()) it=(c).begin()+1; it==(c).end()--; it++)
#define MP make_pair
#define ll long long
typedef long double ld;
typedef unsigned long long ull;
typedef pair<int,int> II;
typedef pair<ll,ll> LL;
const ll inf=1e9+1000;
const ll base=1e9+7;
const int N=2e5+2;
int n;
int  main (){
    //freopen("xx.inp","r",stdin);  freopen("yy.out","w",stdout);
    //freopen(".inp","r",stdin);  freopen(".out","w",stdout);
    ios::sync_with_stdio(false); cin.tie(NULL);
    double g , p , s , t1 , t2 ;
    cin >> g >> p >> s >> t1 >> t2 ;
    g = (g + p/60 + s/3600 ) ;
    p = (p+s/60)/5 ;
    if(p == 0) p = 12 ;
    s = s/5 ;
    if(s == 0) s = 12 ;
    if(t1>t2) swap(t1,t2) ;
    if( t1 == g || t1 == s || t1 == p || t2 == g || t2 == p || t2 == s ) {
        cout << "NO" ;
        return 0 ;
    }
    int d = 0 ;
    if(g > t1 && g < t2 ) d++ ;
    if(p > t1 && p < t2 ) d++ ;
    if(s > t1 && s < t2 ) d++ ;
    if( d %3 == 0) cout << "YES" ;
    else cout << "NO" ;
}
