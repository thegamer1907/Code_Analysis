#include <bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define ld long double
#define F first
#define S second
#define mp make_pair
#define pb push_back

using namespace std;

const int MIN = 1e3 + 2;
const int MXN = 1e6 + 3;
const int INF = 1e9 + 7;
const double EPS = 1e-9;
const ll LINF = 1e18 + 15;

string st;
string s;
int n;
bool ok, ok1;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> st;
    cin >> n;
    for (int i = 1; i <= n; ++i){
        cin >> s;
        if (s == st){
            cout << "YES";
            return 0;
        }
        if (s[0] == st[1]) ok = 1;
        if (st[0] == s[1]) ok1 = 1;
        if (ok && ok1){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
