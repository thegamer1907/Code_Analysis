#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define FOR(i ,a, b) for (int i = a ; i <= b ; i++)
#define sz(a) int(a.size())
#define cuti(a) cout << a << endl;
#define cutii(a,b) cout << a << " " << b << endl;
#define cutiii(a,b,c) cout << a << " " << b << " " << c << endl;
#define vec(a) vector<int > a;

template<typename T,typename U> inline void chmin(T &x,U y){ if(y<x) x = y; }

typedef pair<int ,int > pii;
typedef long long LL;
const long long oo = 1e9 + 7;

string s;
string x[2233];
int n;

int main() {
   // freopen("test.txt","r",stdin);
    cin >> s;
    cin >> n;
    for (int i = 0 ; i < n ; i++) {
       cin >> x[i];
    }
    for (int i = 0 ; i < n ; i++) {
        if ( s == x[i]) {
            cout << "YES";
            return 0;
        }
    }
    for (int i = 0 ; i < n  ; i++) {
        for (int j=0 ; j < n ; j++) {
            string t = "";
            t += x[i][1];
            t += x[j][0];
            if ( t == s) {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO" << endl;
}
