/*
    Program by T1rex a.k.a Hrumka
    Olympiad: Technocup 2018 final.
    Date 04.03.2018.
    All copyrights reserved.
*/
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define pp pop_back

#define F first
#define S second
#define FF F.F
#define FS F.S
#define SF S.F
#define SS S.S

#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ldb;

typedef pair < int, int > pii;
typedef pair < ll, ll > pll;
typedef pair < int, ll > pil;
typedef pair < ll, int > pli;

const int inf = 1e9;
const ll INF = 1e18;
const int mod = 1e9 + 7;
const int MAXN = (int)1e6 + 228;
const double eps = 1e-6;
const double pi = acos (-1.0);

bool ok (int x, int y) {
    return ((x >> 1) + bool (x & 1)) == ((y >> 1) + bool (y & 1));
}

int main () {
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL); cout.tie (NULL);
    int a, b, n;
    cin >> n >> a >> b; int k = n;
    int result = 1;
    while (!ok (a, b)) {
        a = ((a >> 1) + bool (a & 1));
        b = ((b >> 1) + bool (b & 1));
        result++;    
        n >>= 1;
    }
    if (!(result - log2 (k))) cout << "Final!";
    else cout << result;
    //cerr << "Time elapsed: " << (clock () + 0.) / CLOCKS_PER_SEC;
    return 0;
}