#include <bits/stdc++.h>
using namespace std;

typedef long double ld;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

#define pb emplace_back
#define mp make_pair
#define llmin LONG_LONG_MIN
#define imin INT_MIN
#define inf INFINITY
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()


//#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")



template<class T, class U>
istream &operator >> (istream &in, pair<T, U> &p) {
    in >> p.fi >> p.se;
    return in;
}

template<class T, class U>
ostream &operator << (ostream &out, const pair<T, U> &p) {
    out << p.fi << ' ' << p.se;
    return out;
}

template<class T>
istream &operator >> (istream &in, vector<T> &v) {
    for (auto &i : v) {
        in >> i;
    }
    return in;
}

template<class T>
ostream &operator << (ostream &out, const vector<T> &v) {
    for (auto &i : v) {
        out << i << ' ';
    }
    return out;
}



inline void io(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    srand(time(0));
}


ll bin_pow(ll a, ll b){
    return b == 0 ? 1 : ( b % 2 ? bin_pow(a, b - 1) * a : bin_pow(a * a, b / 2) );
}


signed main(){
    io();
    int n, m, maxi = 0, s = 0;
    cin >> n >> m;
    for (int i = 0; i < n; ++i){
    	int t;
    	cin >> t;
    	maxi = max(maxi, t);
    	s += t;
	}
	cout << max((s + m + n - 1) / n, maxi) << ' ' << maxi + m << '\n';
	return 0;
}
