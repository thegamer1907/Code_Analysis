#include <bits/stdc++.h>
#include <iostream>

using namespace std;

#define rep(i, a, b) for (int i = a; i <= b; i++)
#define lp(i, n) for (int i = 0; i < n; i++)
#define foreach(it, ar) for ( typeof(ar.begin()) it = ar.begin(); it != ar.end(); it++ )
#define clr(ar, val) memset(ar, val, sizeof(ar))
#define PI 3.1415926535897932385
#define ull unsigned long long
#define ll long long
#define pb push_back
#define bit(n) (1<<(n))
#define Last(i) ( (i) & (-i) )
#define sq(x) ((x) * (x))
#define INF INT_MAX
#define mp make_pair
#define inn freopen("input.txt","r",stdin)
#define outt freopen("output.txt","w",stdout)
#define ios ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define all(v) ((v).begin()), ((v).end())
#define what_is(x) cerr << #x << " is " << x << endl;


//vector<vector<int>> adj;

//const int N = 19, M = 4e4 + 5, OO = 0x3f3f3f3f;
//ll n, k;
//ll dp[N + 3][(1<<N) + 3], A[N+3], adj[N + 3][N + 3];

int main ()
{
    //ios;

    //#ifndef ONLINE_JUDGE
        //inn;outt;
    //#endif
    ll k;
    scanf("%*d %lld", &k);
    printf("%d", __builtin_ffsll(k));
    return 0;
}
