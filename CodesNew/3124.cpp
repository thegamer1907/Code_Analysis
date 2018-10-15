#include <bits/stdc++.h>
using namespace std;
#define for0(i, n) for(int i = 0; i < n; i++)
#define for1(i, n) for(int i = 1; i <= n; i++)
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define V vector<int>
#define VP vector<pair<int, int> >
#define FASTIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define index INDEX
#ifdef _WIN32
#include <windows.h>
#define print(x) PRINT(x, #x)
template<typename T> inline const void PRINT(T VARIABLE, string NAME) {
#ifndef ONLINE_JUDGE
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 10);
    cerr << NAME << " = " << fixed << VARIABLE;
    SetConsoleTextAttribute(hConsole, 7);
    cerr << '\n';
#endif
}
#else
#define print(x) 0
#endif
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll INFLL = 2 * (ll)1e18 + 100;
const int INFINT = 2 * (int)1e9 + 100;
const double PI = atan(1) * 4;
const double EPS = 1e-6;
const int SEED = 1e3 + 7;

const int MOD = 1e9 + 7;
const int NMAX = 3 * 1e5 + 5;

int n, k;
deque<pair<int, int>> zero;
int v[NMAX];

int32_t main() {
    FASTIO;
    cin >> n >> k;
    int sol = 0;
    if(k == 0) {
        int here = 0;
        for1(i, n) {
            int a;
            cin >> a;
            v[i] = a;
            if(a == 0) here = 0;
            else here++;
            sol = max(sol, here);
        }
        sol = max(sol, here);
        cout << sol << '\n';
        for1(i, n) cout << v[i] << ' ';
        return 0;
    }

    int here = 0, ind = 0;
    for1(i, n) {
        int a;
        cin >> a;
        v[i] = a;
        if(a == 1) {
            here++;
            int temp = i;
            if(!zero.empty()) temp = temp - zero[0].first + 1 + zero[0].second;
            if(!zero.empty()) {print(zero[0].first); print(zero[0].second);}
            if(temp > sol) {
                sol = temp;
                ind = i;
            }
            continue;
        }
        if(zero.size() == k) zero.pop_front();
        zero.pb({i, here});
        here = 0;
        int temp = i;
        temp = temp - zero[0].first + 1 + zero[0].second;
        if(temp > sol) {
            sol = temp;
            ind = i;
        }
    }
    cout << sol << '\n';

    while(ind >= 1 && k) {
        if(v[ind] == 0) {
            v[ind] = 1;
            k--;
        }
        ind--;
    }
    for1(j, n) cout << v[j] << ' ';

    return 0;
}
