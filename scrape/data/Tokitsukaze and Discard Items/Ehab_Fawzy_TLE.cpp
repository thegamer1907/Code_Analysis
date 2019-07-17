#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cstdlib>

#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less


#define FASTIO ios::sync_with_stdio(0); cin.tie(0);
#define show(x) cout << #x << " = " << x << "\n"
#define mem( a , b ) memset( a , b , sizeof a )
#define popcnt(x) __builtin_popcount(x)
#define all(x) x.begin() , x.end()
#define SZ(a) (int)a.size()
#define ll  long long
#define ld  long double
#define vii vector  <ll>
#define dqi deque   <ll>
#define sii set     <ll>
#define vpi vector  <pii>
#define mii map     <ll,ll>
#define pii pair    <ll,ll>
#define pi pair     <int,int>
#define vss vector  <string>
#define pb  push_back
#define F   first
#define S   second
#define L   length()
#define PI  3.141592654
#define OO (ll)1e18
#define mod(x,m) (x%m + m )%m
#define EPS 1e-9
using namespace std;
using namespace __gnu_pbds;
void ONLINE__JUDGE();

typedef tree<ld, null_type, less<ld>, rb_tree_tag,
            tree_order_statistics_node_update>
    ordered_set;

pii swapii( pii pr ){ return { pr.S , pr.F }; }
int dx[] = {  0 ,  0 , -1 , +1 , -1 , +1 , -1 , +1 };
int dy[] = { -1 , +1 ,  0 ,  0 , -1 , +1 , +1 , -1 };

const ll MOD = 1e9 + 7;
const ll MAX = 5e5 + 9;

ll x, y, z; dqi vec;

int main()
{
    FASTIO ONLINE__JUDGE();

    cin >> x >> y >> z; vec.resize(y);
    for ( ll& i : vec ) cin >> i;

    ll st = 1 , ed = z , cnt = 0;
    while ( !vec.empty() )
    {
        ll inc = 0;
        while ( !vec.empty() && vec.front() <= ed )
        {
            vec.pop_front(); inc++;
        }
        if ( inc > 0 )
        {
            ed += inc; cnt++;
        }
        else
        {
            st = ed , ed += z;
        }
    }
    cout << cnt;
    return 0;
}


void ONLINE__JUDGE()
{
    #ifndef ONLINE_JUDGE
    freopen( "inp.c"         , "r" , stdin  );
    //freopen( "OutPut.txt"   , "w" , stdout );
    #endif // ONLINE_JUDGE
}