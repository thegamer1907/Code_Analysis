#include <bits/stdc++.h>

#define loop(i, n)    for(int i = 0; i < n; i++)
#define loop1(i, a, n) for(int i = a; i < n; i++)
#define vloop(i, a)   for(vector<int>::iterator i=a.begin(); i != a.end(); i++)
#define dloop(i, a)   for(deque<int>::iterator i=a.begin(); i != a.end(); i++)
#define PI 3.141592653589793238
#define bc __builtin_popcountll
#define gc getchar_unlocked
#define pc putchar_unlocked
#define pb push_back
#define pf push_front
#define rf pop_front
#define rb pop_back
#define mp make_pair
#define fs first
#define sc second
#define fi ios_base::sync_with_stdio(false); cin.tie(NULL)

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll M = 1e9 + 7;
const ll INF = 1e9;
inline ll pwr(ll base, ll n, ll m){ll ans = 1;while( n > 0 ) {if ( n % 2 == 1 )ans = (ans * base) % m; base = (base * base) % m;n/=2;}return ans;}

const int N = 1e6 + 10;
string s;
int k;
ll dp[N];


int main() {
    fi;

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    cin >> k >> s;
    int l = s.length(), cnt = 0;
    ll ans = 0;
    dp[0] = 1;
    
    loop(i, l) {
        cnt += s[i]-'0';
        if( cnt >= k )
            ans += dp[cnt-k];
        dp[cnt]++;
    }

    cout << ans;
    return 0;
}