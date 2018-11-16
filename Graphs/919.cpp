#include <bits/stdc++.h>
#define ll                  long long int
#define ull                 unsigned long long int
#define ld                  long double
#define fi                  first
#define se                  second
#define pb                  push_back
#define pbb                 pop_back
#define mp                  make_pair
#define pii     	        pair<int,int>
#define all(x)              x.begin(), x.end()
#define uniq(x)             x.erase(unique(x.begin(),x.end()),x.end())
#define mem(array, value)   memset(array, value, sizeof(array))
#define lcm(a,b)            (abs(a)/gcd(a,b))*abs(b)
#define PI      	        acos(-1.0)
#define INF     	        1e9
#define EPS     	        1e-8
#define MOD                 1000000007
#define MAX                 1000009
#define line                cout << "\n==========\n"
#define fastRead 	        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;

/// <----------------------------------------------------------------------> ///

int main ()
{
    #ifdef forthright48
    freopen ( "input.txt", "r", stdin );
    //freopen ( "output.txt", "w", stdout );
    #endif // forthright48
    int n, t;
    cin >> n >> t;
    int ara[n+1];
    for (int i = 1; i<=n; i++){
        cin >> ara[i];
    }
    int i = 1;
    while (true)
    {
        int cur = ara[i] + i;
        if (cur == t){
            return cout << "YES\n", 0;
        }
        else if (cur > t){
            return cout << "NO\n", 0;
        }
        i = cur;
    }
    return 0;
}
