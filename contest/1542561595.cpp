#include <bits/stdc++.h>

#define fori(i, ini, lim) for(int i = int(ini); i < int(lim); i++)
#define ford(i, ini, lim) for(int i = int(ini); i >= int(lim); i--)

#define debug(x) cout << "> " << #x << " = " << x << endl;
#define debug_at(arr, at) cout << "> " << #arr << "[" << at << "] = " << arr[at] << endl;
#define debug_pair(p) cout << "> " << #p << " = (" << p.first << ", " << p.second << ")" << endl;

using namespace std;

string pat;
vector<string> vec;

bool ans = false;

void solve() {
    int n = vec.size();
    fori(i, 0, n) {
        fori(j, i + 1, n) {
            string ab = string(1, vec[i][1]) + string(1, vec[j][0]);
            if(ab == pat) {
                ans = true;
            }
            ab = string(1, vec[j][1]) + string(1, vec[i][0]);;
            if(ab == pat) {
                ans = true;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);

    cin >> pat;

    int n;
    cin >> n;

    fori(i, 0, n) {
        string str;
        cin >> str;
        vec.push_back(str);
        vec.push_back(str);
        if(str == pat) {
            ans = true;
        }
    }
    solve();
    cout << (ans ? "YES" : "NO") << "\n";

    return 0;
}
