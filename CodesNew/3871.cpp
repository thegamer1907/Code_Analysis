#include <bits/stdc++.h>
using namespace std ;

typedef pair<int,int> pi;
typedef pair<double,int > dpi;
typedef long long ll;
typedef unsigned long long ull;
#define sc(a) scanf("%d",&a)
#define scd(a) scanf("%lf" , &a)
#define pb push_back
const int MAX = 1e5+55;
const int inf = 2*1e9+77;
const int MOD = 1e9+7;
const double PI = 3.14159265359;
const double eps = 0.0000001;

int n ;
int a[MAX] ;

bool check (ll d ) {
    ll hold = d ;
    for (int i=0 ; i<n ; i++) {
        hold -= (d-a[i]) ;
        if (hold <= 0) return true ;
    }
return false ;}

int main() {
    cin >> n ;
    for (int i=0 ; i<n ; i++) {
        cin >> a[i] ;
    }
    sort(a , a+n , greater<int>()) ;

    ll st = a[0] , en = inf , res = 0 ;

    while (st <= en) {
        ll md = (st+en) / 2;
        if (check(md)) {
            res = md ;
            en = md - 1 ;
        }
        else
            st = md + 1 ;
    }
    cout << res ;
return 0;}
