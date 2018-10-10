#include <bits/stdc++.h>

#define loop(i, n)    for(int i = 0; i < n; i++)
#define loop1(i, a, n) for(int i = a; i < n; i++)
#define vloop(i, a)   for(vector<int>::iterator i=a.begin(); i != a.end(); i++)
#define dloop(i, a)   for(deque<int>::iterator i=a.begin(); i != a.end(); i++)
#define PI M_PI
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

inline ll pwr(ll base, ll n, ll m){ll ans = 1;while(n>0){if(n%2 == 1)ans = (ans*base)%m;base = (base * base)%m;n/=2;}return ans;}

const int N = 1e7 + 1;
int vis[N];
ll sum[N];
bool prime[N];
int n, l, r, v, m;

void sieve() {

    memset(prime, true, sizeof(prime));

    loop1(i, 2, N) {

        if( prime[i] ) {

            if( vis[i] )
                sum[i] += vis[i];

            int j = i * 2;

            while( j < N ) {
                if( vis[j] )
                    sum[i] += vis[j];
                prime[j] = false;
                j += i;

            }
        }

    }

}


int main() {
    fi;

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    cin >> n;

    loop(i, n) {
        cin >> v;
        vis[v]++;
    }

    sieve();
    sum[1] = 0;

    loop1(i, 2, N )
        sum[i] += sum[i-1];


    cin >> m;

    while( m-- ) {

        cin >> l >> r;
        if( l >= N ) {
            cout << 0 << "\n";
            continue;
        }
        r = min(N-1,r);

        ll ans = sum[r] - sum[l-1];

        cout << ans << "\n";
    }

    return 0;
}