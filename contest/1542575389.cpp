#include <bits/stdc++.h>

#define ios ios_base::sync_with_stdio, cout.tie(0), cin.tie(0);
#define S second
#define F first
#define pb push_back
#define nl '\n'
#define mp make_pair
#define NL cout << '\n';
#define EX exit(0)
#define all(s) s.begin(), s.end()

const long long MXN = 1e6 + 1;
const long long MNN = 1e3 + 1;
const long long MOD = 1e9 + 7;
const long long INF = 1e18;
const long long OO = 1e9 + 500;

typedef long long llong;
typedef unsigned long long ulong;
typedef long double ldub;

using namespace std;

llong n, m, x, y, cntz;
llong b[MXN];
llong mx = -1, mn = INF;
string s, st[MXN];

int main(){
    ios;
    cin >> s;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> st[i];
        if(st[i] == s){
            cout << "YES";
            EX;
        }if(st[i][0] == s[1]){
            x = 1;
        }if(st[i][1] == s[0]){
            y = 1;
        }
    }cout << (x == 1 && y == 1 ? "YES" : "NO");
    return 0;
}
