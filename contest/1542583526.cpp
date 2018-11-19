#include <bits/stdc++.h>

using namespace std;

#define ss second
#define ff first
#define p_b push_back
#define endl "\n"


typedef long long ll;
typedef long double ld;

const ll INF = 2e18;
const ll INFINT = 2e9;
const int N = 1000006;
const int NN = 1006;
const int MOD = 1000000007;

void DIE(string s) {
    cout << s << endl;
    exit(0);
}

void DIE(vector < int > &v) {
    for (int i = 0; i < int(v.size()); i++) cout << v[i] << ' '; cout << endl;
    exit (0);
}

void DIE(vector < ll > &v) {
    for (int i = 0; i < int(v.size()); i++) cout << v[i] << ' '; cout << endl;
    exit (0);
}

void DIE(int a[], int n) {
    for (int i = 0; i < n; i++) cout << a[i] << ' '; cout << endl;
    exit (0);
}

void DIE(string a[], int n) {
    for (int i = 0; i < n; i++) cout << a[i] << ' '; cout << endl;
    exit (0);
}

void DIE(ll x) {
    cout << x << endl;
    exit (0);
}

void DIE(int x) {
    cout << x << endl;
    exit(0);
}

void YES() {
    DIE("YES");
}

void Yes() {
    DIE("Yes");
}

void NO() {
    DIE("NO");
}

void No() {
    DIE("No");
}
/////////////////
// Write below //
/////////////////


int cnt[N];

int main () {
    ios_base::sync_with_stdio(0);
#ifdef LOCAL
    freopen ("input.txt", "r", stdin);
    freopen ("output.txt", "w", stdout);
#else
    #define cerr if(0)cerr
    //freopen ("input.txt", "r", stdin);freopen ("output.txt", "w", stdout);
    //freopen ("quadro.in", "r", stdin);freopen ("quadro.out", "w", stdout);
#endif // LOCAL
    int n, k;
    cin >> n >> k;
    vector < vector < int > > v(n, vector < int > (k));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cin >> v[i][j];
        }
        int mask = 0;
        for (int j = 0; j < k; j++) {
            if (v[i][j]) mask += (1 << j);
        }
        cnt[mask]++;
        if (!mask) YES();
    }
    //cerr << 2 << endl;
    for (int i = 0; i < n; i++) {
        int x = 0;
        for (int j = 0; j < k; j++) {
            if (v[i][j]) x += (1 << j);
        }
        for (int j = 0; j < (1 << k); j++) {
         //       cerr << j << ' ' << x << ' ' << (x ^ j) << endl;
            if (cnt[j] && ((x ^ j) == (x + j))) YES();
        }
    }
    NO();
}

/////////////////
// Write above //
/////////////////
