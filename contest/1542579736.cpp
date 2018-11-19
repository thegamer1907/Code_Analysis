#include <bits/stdc++.h>

#define pii pair<int, int>
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define ll long long
#define ld long double
#define sz(v) int(v.size())
#define all(v) v.begin(), v.end()
#define vec vector<int>

#define left not_right
#define y1 what

using namespace std;

const int N = (int) 4e4 + 10;
const int M = (int) 2e6 + 7;
const ll LINF = (ll) 1e18;
const int INF = (int) 1e6;
const double EPS = (double) 1e-9;

int h, m, s, t1, t2;

int clockwise(int x, int y) {
    while (1) {
        x = (x + 1) % 43200;
        if (x == y) 
            return true;
        if (x == h || x == m || x == s) 
            return false;
    }
}

int counterclockwise(int x, int y) {
    while (1) {
        x = (x - 1 + 43200) % 43200;
        if (x == y) 
            return true;
        if (x == h || x == m || x == s) 
            return false;
    }
}

int main() {
    #define fn "balls"
    #ifdef witch
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #else
//        freopen(fn".in", "r", stdin);
//        freopen(fn".out", "w", stdout);
    #endif	
    srand(time(0));
    cin >> h >> m >> s >> t1 >> t2;
    h = (h % 12) * 3600 + m * 60 + s;
    t1 %= 12;
    t2 %= 12;
    m = m * 721 + s;
    s *= 721;
    t1 *= 3600;
    t2 *= 3600;
    if (clockwise(t1, t2) || counterclockwise(t1, t2)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}