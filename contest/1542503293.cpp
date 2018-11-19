#include<iostream>
#include<iomanip>
#include<map>
#include<set>
#include<string>
#include<vector>
#include<utility>
#include<cmath>
#include<algorithm>
#include<stack>
#include<unordered_set>
#include<queue>
#include<cmath>

#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define sz(c) int((c).size())
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()

using namespace std;
typedef long long ll;

int main() {
    string to, s[100];
    int n;
    cin >> to >> n;
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }
    for (int i = 0; i < sz(to); i += 2) {
        string need = i + 1 == sz(to) ? to.substr(i, 1) : to.substr(i, 2);
        bool t = false;
        for (int j = 0; j < n; ++j) {
            if (need == s[j] || need == s[j].substr(0, 1)) {
                t = true;
                break;
            }
        }
        if (!t && i == 0) {
            for (int j = 0; j < n; ++j) {
                if (to[i] == s[j][1]) {
                    t = true;
                    break;
                }
            }
            --i;
        }
        if (!t) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
