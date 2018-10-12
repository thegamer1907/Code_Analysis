#include <iostream>

#include <algorithm>
#include <cmath>
#include <math.h>

#include <string>

#include <sstream>

#include <vector>
#include <set>
#include <map>

#include <list>

#include <cstdio>
#include <iomanip>
#include <time.h>

typedef long long ll;
typedef unsigned int uint;
typedef unsigned long long ull;

#define fi first
#define se second

#define pll pair<ll, ll>
#define pii pair<int, int>
#define size(x) ((int) x.size())
#define pb push_back
#define mkp make_pair

#define NI nextInt()
#define NL nextLong()

#define all(x) x.begin(), x.end()
#define show(x) cerr << #x << " = " << x << ", "
#define showln(x) cerr << #x << " = " << x << "\n"

#define by(T, x) [](const T &a, const T &b) {return a.x < b.x;}

#define fname "777D"

using namespace std;

inline void frepik () {
    #ifndef ONLINE_JUDGE
    freopen(fname".in", "r", stdin);
    freopen(fname".out", "w", stdout);
    #endif
}

const int dx[] = {1, 0, 0, -1, -1, 1, -1, 1};
const int dy[] = {0, 1, -1, 0, -1, 1, 1, -1};

const int root = (int) 1;
const int N = (int) 5e5 + 1;
const int logN = (int) log2(N) + 1;

const int inf = (int) (1u<<31) - 1u;
const ll INF = (ll) (1ull<<63) - 1ull; 

inline int nextInt () {int e; scanf("%d", &e); return e;}
inline ll nextLong () {ll e; scanf("%I64d", &e); return e;}

int n;
string word[N];

int main () {            
    frepik();
    ios_base :: sync_with_stdio(0);
    cin.tie(NULL);
    cin >> n;
    for(int i = 1; i <= n; i++) {
        char c; cin >> c;
        cin >> word[i];
    }
    for(int i = n; i >= 2; i--) {
        string &current = word[i];
        string &lower = word[i - 1];
        int l = 0;
        int r = size(lower);
        int index = 0;
        while(l <= r) {
            int len = (l + r) >> 1;
            if(lower.substr(0, len) <= current) {
                index = len;
                l = len + 1;
            } else r = len - 1;
        }
        lower = lower.substr(0, index);
    }

    for(int i = 1; i <= n; i++)
        cout << '#' << word[i] << '\n';                        
    return 0;
}