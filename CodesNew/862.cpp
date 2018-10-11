#include <bits/stdc++.h>

#define ios ios_base::sync_with_stdio, cout.tie(0), cin.tie(0);
#define S second
#define F first
#define pb push_back
#define nl '\n'
#define NL cout << '\n';
#define EX exit(0)
#define all(s) s.begin(), s.end()

const long long MXN = 3e6 + 1;
const long long MNN = 1e3 + 1;
const long long MOD = 1e9 + 7;
const long long INF = 1e18;
const long long OO = 1e9 + 500;

typedef long long llong;
typedef long double ldub;

using namespace std;

llong n, q, b[MXN], ans, cnt, p[MXN], m;
string s;
map<string, int> mp;

int main(){
    ios;
    //freopen("input.txt", "r", stdin);
    //freopen(".out", "w", stdout);
    set<string> st;
    cin >> n >> m;
    for(int i = 1; i <= n + m; i++){
        cin >> s;
        mp[s]++;
        if(mp[s] == 2){
            st.insert(s);
        }
    }n -= st.size();
    m -= st.size();
    if(st.size() % 2 == 1){
        cout << (n >= m ? "YES" : "NO");
    }else{
        cout << (n <= m ? "NO" : "YES");
    }
    return 0;
}


