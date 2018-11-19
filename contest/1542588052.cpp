#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;

vector<string> all;
vector<int> dp;
int n;
string s;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    #ifdef LOCAL
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #else
        #define endl '\n'
    #endif // LOCAL

    cin >> s >> n;

    all.resize(n);
    for(int i = 0; i < n; i++) {
        cin >> all[i];
    }

    bool ok = false;
    for(int i = 0; i < n; i++) {
        ok |= all[i] == s;
        for(int j = 0; j < n; j++) {
            ok |= all[i][1] == s[0] && all[j][0] == s[1];
        }
    }

    if(ok) cout << "YES";
    else cout << "NO";

}
