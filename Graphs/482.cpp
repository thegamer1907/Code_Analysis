#include <bits/stdc++.h>

using namespace std;

inline int read() {
    int s = 0;
    char c;
    while ((c = getchar()) < '0' || c > '9');
    do { s = s * 10 + c - '0'; } while ((c = getchar()) >= '0' && c <= '9');
    return s;
}

typedef long long ll;
typedef long double ld;

typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<pd> vpd;

typedef map<int, int> mi;
typedef map<string, string> ms;


#define FOR(i, a) for(int i = 0; i < (a); i++)
#define FORR(i, a, b) for(int i = a; i <= (b); i++)
#define rFOR(i, a) for(int i = (a) - 1; i >= 0; i--)
#define rFORR(i, a, b) for(int i = (b) - 1; i>= (a); i--)

#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define by(x) [](const auto& a, const auto& b) {return a.x > b.x}

bool descending(int a, int b) { return a > b; }

string toStr(char c) { return string(1, c); }

int x;
int a[10000];
const int MX = 100001;

int main() {
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    for (int i = 0; i < t; ++i) {
        for (int j = 0; j < n; ++j) {
            if (s.substr(j, 2) == "BG") s[j] = 'G', s[j + 1] = 'B', j++;
        }
    }
    cout << s << endl;
}