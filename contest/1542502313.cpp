/*
PROG: source
LANG: C++11
_____
.'     '.
/  0   0  \
|     ^     |
|  \     /  |
\  '---'  /
'._____.'
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

struct chash
{
        int operator()(int x) const
        {
                x ^= (x >> 20) ^ (x >> 12);
                return x ^ (x >> 7) ^ (x >> 4);
        }
        int operator()(long long x) const
        {
                return x ^ (x >> 32);
        }
};

template<typename T> using orderedset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T, typename U> using hashtable = gp_hash_table<T, U, chash>;

template<class T>
void readi(T &x)
{
        T input = 0;
        bool negative = false;
        char c = ' ';
        while (c < '-')
        {
                c = getchar();
        }
        if (c == '-')
        {
                negative = true;
                c = getchar();
        }
        while (c >= '0')
        {
                input = input * 10 + (c - '0');
                c = getchar();
        }
        if (negative)
        {
                input = -input;
        }
        x = input;
}
template<class T>
void printi(T output)
{
        if (output == 0)
        {
                putchar('0');
                return;
        }
        if (output < 0)
        {
                putchar('-');
                output = -output;
        }
        int aout[20];
        int ilen = 0;
        while(output)
        {
                aout[ilen] = ((output % 10));
                output /= 10;
                ilen++;
        }
        for (int i = ilen - 1; i >= 0; i--)
        {
                putchar(aout[i] + '0');
        }
        return;
}
template<class T>
void ckmin(T &a, T b)
{
        a = min(a, b);
}
template<class T>
void ckmax(T &a, T b)
{
        a = max(a, b);
}
template<class T, class U>
T normalize(T x, U mod = 1000000007)
{
        return (((x % mod) + mod) % mod);
}
long long randomizell(long long mod)
{
        return ((1ll << 45) * rand() + (1ll << 30) * rand() + (1ll << 15) * rand() + rand()) % mod;
}
int randomize(int mod)
{
        return ((1ll << 15) * rand() + rand()) % mod;
}

#define y0 ___y0
#define y1 ___y1
#define MP make_pair
#define MT make_tuple
#define PB push_back
#define PF push_front
#define LB lower_bound
#define UB upper_bound
#define fi first
#define se second
#define debug(x) cerr << #x << " = " << x << endl;

const long double PI = 4.0 * atan(1.0);
const long double EPS = 1e-10;

#define MAGIC 347
#define SINF 10007
#define CO 1000007
#define INF 1000000007
#define BIG 1000000931
#define LARGE 1696969696967ll
#define GIANT 2564008813937411ll
#define LLINF 2696969696969696969ll
#define MAXN 51

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<ld, ld> pdd;

int N, S, M;
vector<int> edge[MAXN];
int dist[MAXN][MAXN], eid[MAXN][MAXN];
bool dir[MAXN][MAXN];
int U[MAXN], V[MAXN];
int bad[MAXN];
int dp[MAXN][2][MAXN][MAXN];
bool vis[MAXN][2][MAXN][MAXN];
int parent[MAXN], depth[MAXN], subt[MAXN];
int ans = INF;

void dfs(int u)
{
        subt[u] = bad[u];
        for (int v : edge[u])
        {
                if (v == parent[u])
                {
                        continue;
                }
                parent[v] = u;
                depth[v] = depth[u] + dist[u][v];
                dfs(v);
                subt[u] += subt[v];
        }
        return;
}
int solve(int i, bool f, int j, int k);
bool check(int u, int v, int j, int k, int c)
{
        //after going from u -> v where there are j guys inside and k guys total, and you allow a cost of at most c
        // if (u == 1 && v == 0 && j == 1 && k == 1) cerr << c << endl;
        bitset<MAXN> bs, trans, nb;
        bs[j] = true;
        for (int w : edge[v])
        {
                if (w == u) continue;
                for (int i = 0; i <= j; i++)
                {
                        if (solve(eid[v][w], dir[v][w], i, k) > c)
                        {
                                nb |= (bs >> i);
                        }
                }
                swap(nb, bs);
        }
        return !(bs[0]);
}
int solve(int i, bool f, int j, int k)
{
        assert(k >= j);
        if (j == 0 && k == 0) return 0;
        if (j == 0) return INF;
        if (vis[i][f][j][k])
        {
                return dp[i][f][j][k];
        }
        int u = U[i], v = V[i];
        if (f) swap(u, v);
        if (edge[v].size() == 1)
        {
                dp[i][f][j][k] = dist[u][v] + solve(i, !f, k - j, k - j);
                return dp[i][f][j][k];
        }
        int lo = 0, hi = CO;
        while(hi > lo)
        {
                int mid = (hi + lo) / 2;
                if (check(u, v, j, k, mid))
                {
                        hi = mid;
                }
                else
                {
                        lo = mid + 1;
                }
        }
        vis[i][f][j][k] = true;
        dp[i][f][j][k] = lo + dist[u][v];
        return dp[i][f][j][k];
}

int32_t main()
{
        ios_base::sync_with_stdio(0);
        srand(time(0));
        //	cout << fixed << setprecision(10);
        //	cerr << fixed << setprecision(10);
        if (fopen("input.in", "r"))
        {
                freopen ("input.in", "r", stdin);
                freopen ("output.out", "w", stdout);
        }
        cin >> N;
        for (int i = 0; i < N - 1; i++)
        {
                int u, v, d;
                cin >> u >> v >> d;
                u--; v--;
                edge[u].PB(v);
                edge[v].PB(u);
                dist[u][v] = d;
                dist[v][u] = d;
                U[i] = u;
                V[i] = v;
                eid[u][v] = i;
                eid[v][u] = i;
        }
        cin >> S; S--;
        cin >> M;
        for (int i = 0; i < M; i++)
        {
                int u;
                cin >> u;
                u--;
                if (u == S) continue;
                bad[u]++;
        }
        for (int i = 0; i < N; i++)
        {
                parent[i] = N;
        }
        dfs(S);
        // for (int i = 0; i < N; i++)
        // {
        //         cerr << parent[i] << ' ';
        // }
        // cerr << endl;
        for (int i = 0; i < N - 1; i++)
        {
                if (parent[U[i]] == V[i])
                {
                        swap(U[i], V[i]);
                }
                // cerr << "dir " << V[i] << ' ' << U[i] << " is " << 1 << endl;
                dir[U[i]][V[i]] = 0;
                dir[V[i]][U[i]] = 1;
                // cerr << U[i] << ' ' << V[i] << endl;
        }
        for (int v : edge[S])
        {
                // cerr << v << ' ' << solve(eid[S][v], 0, subt[v], subt[0]) << endl;
                ckmin(ans, solve(eid[S][v], 0, subt[v], subt[S]));
        }
        cout << ans << '\n';
        //	cerr << "time elapsed = " << (clock() / (CLOCKS_PER_SEC / 1000)) << " ms" << endl;
        return 0;
}
