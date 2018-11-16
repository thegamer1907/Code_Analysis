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

#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define sz(c) int((c).size())
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()

using namespace std;
typedef long long ll;

int p[2010], n, ans = 0;

int main() {
    cin >> n;
    for (int i = 1; i < n + 1; ++i) {
        cin >> p[i];
    }
    for (int i = 1; i < n + 1; ++i) {
        int h = 1, ii = i;
        while (p[ii] != -1) {
            ++h;
            ii = p[ii];
        }
        ans = max(ans, h);
    }
    cout << ans;
}

