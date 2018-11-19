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
int N;
int  main (){
    //freopen("xx.inp","r",stdin);  freopen("yy.out","w",stdout);
    //freopen(".inp","r",stdin);  freopen(".out","w",stdout);
    ios::sync_with_stdio(false); cin.tie(NULL);
    char C1 , C2 , c1  , c2 ;
    cin >> C1 >> C2 ;
    cin >> N ;
    bool kt1 = false , kt2 = false ;
    bool kt= false ;
    For(i,1,N)  {
        cin >> c1 >> c2 ;
        if(C1 ==c1 && C2 == c2 ) kt = true ;
        if(c2 == C1 ) kt1 = true ;
        if(c1 == C2 ) kt2 = true ;
    }
    if(kt1 && kt2) kt = true ;
    if(kt) cout << "YES" ;
    else cout << "NO" ;
}
