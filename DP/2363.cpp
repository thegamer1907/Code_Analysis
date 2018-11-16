#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define INFLL 0x3f3f3f3f3f3f3f3FLL
#define watch(x) clog << #x << " is " << x << endl
#define _ << ' ' <<
#define all(x) (x).begin(), (x).end()
#define sz(x) int((x).size())
#define st first
#define nd second
#define pb push_back
#define mp make_pair

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef pair<int, int> ii;
typedef vector<ii> vii;

const int N = 200050;

int main() {
    string s;
    cin >> s;
    int n = sz(s);
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            for (int k = j; k < n; ++k) {
                int aux = s[i]-'0';
                if (j > i) aux = aux*10 + s[j]-'0';
                if (k > j) aux = aux*10 + s[k]-'0';
                if (aux%8) continue;
                cout << "YES" << endl;
                cout << aux << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}
