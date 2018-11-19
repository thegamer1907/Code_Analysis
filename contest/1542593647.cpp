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
    string q;
    cin >> q;
    int n;
    cin >> n;
    cerr << q << ' ' << n << endl;
    vector < string > v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] == q) YES();
    }
    map < char, int > m;
    for (int i = 0; i < n; i++) {
        m[v[i][1]]++;
    }
    if (m[q[0]] == 0) NO();
    for (int i = 0; i < n; i++) {
        int x = m[q[0]];
        //if (v[i][1] == q[0]) x--;
        if (v[i][0] == q[1] && x > 0) YES();
    }
    NO();
}

/////////////////
// Write above //
/////////////////
