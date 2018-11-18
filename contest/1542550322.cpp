#include <bits/stdc++.h>

using namespace std;

#define fto(i, s, e) for (int i = s; i <= e; ++i)
#define fto1(i, s, e) for (int i = s; i < e; ++i)
#define fdto(i, s, e) for (int i = s; i >= e; --i)
#define fdto1(i, s, e) for (int i = s; i > e; --i)
#define fit(var, it) for (__typeof(var.begin()) it = var.begin(); it != var.end(); ++it)
#define frit(var, it) for (__typeof(var.rbegin()) it = var.rbegin(); it != var.rend(); ++it)

#define newl '\n'
#define Vname(var) #var
#define debugt cerr << 0.001*clock() << newl
#define debug(x) cout << Vname(x) << " = " << x << newl
#define debug1(x, i) cout << Vname(x) << '[' << i << ']' << " = " << x[i] << newl
#define debug2(x, i, j) cout << Vname(x) << '[' << i << ']' << '[' << j << ']' << " = " << x[i][j] << newl
#define debug3(x, i, j, k) cout << Vname(x) << '[' << i << ']' << '[' << j << ']' << '[' << k << ']' << " = " << x[i][j][k] << newl
#define debuga(x, s, e) cout << Vname(x) << " = "; _debuga(x, s, e); cout << newl

#define ll long long
#define ui unsigned int
#define ull unsigned long long
#define ii pair<int, int>

#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define glen(v) ((int) (v).size())

template<typename T> void _debuga(T const &v, int s, int e) {
    cout << '[' << s << "->" << e << "] {"; fto (i, s, e) { cout << v[i]; if (i < e) cout << ", "; } cout << '}';
}

template<typename T1, typename T2> ostream& operator<< (ostream &os, pair<T1, T2> const &v) {
    return os << '(' << v.ff << ", " << v.ss << ')';
}

template<typename T> ostream& operator<< (ostream &os, vector<T> const &v) {
    os << '[' << glen(v) << "] {"; fto1 (i, 0, glen(v)) { os << v[i]; if (i < glen(v) - 1) os << ", "; } return os << '}';
}

#define eps 1e-18
#define oo 1000000009
#define mod 1000000007
#define maxn 302

int n;
bool front[255], back[255];
string a;
string s[maxn];

int main() {
    #ifndef ONLINE_JUDGE
        freopen("test.inp", "r", stdin);
        freopen("test.out", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);

    cin >> a >> n;

    fto (i, 1, n) {
        cin >> s[i];
        if (s[i] == a) {
            puts("YES");
            return 0;
        }
        s[n+i] = s[i];
    }

    n <<= 1;

    fto (i, 1, n) {
        front[s[i][0]] = 1;
        back[s[i][1]] = 1;
    }

    if (front[a[1]] && back[a[0]]) puts("YES");
    else puts("NO");

    return 0;
}
