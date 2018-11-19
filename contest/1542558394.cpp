#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <cmath>
#include <sstream>
#include <map>
#include <set>
#include <ctime>
using namespace std;

const int maxn = 210;

int N;
int ans[maxn];
string S[maxn];

int get_ans(string& str) {
    int len = str.length(), ans = 0;
    for (int k = 1; ; k++) {
        set<string> mp;

        for (int i = 0; i < len - k + 1; i++) {
            string tmp = "";
            bool has_x = false;
            for (int j = i; j < i + k; j++) {
                tmp += str[j];
                if (str[j] == 'x')
                    has_x = true;
            }
            if (!has_x)
                mp.insert(tmp);
        }

        if (mp.size() == (1 << k))
            ans = k;
        else
            break;
    }
    return ans;
}

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> S[i];
        ans[i] = get_ans(S[i]);
    }

    int Q;
    cin >> Q;
    for (int i = N; i < N + Q; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        S[i] = S[a] + S[b];
        ans[i] = get_ans(S[i]);
        ans[i] = max(ans[i], ans[a]);
        ans[i] = max(ans[i], ans[b]);

        cout << ans[i] << endl;

        // if S[i] is too long, only keep the prefix and subfix of some size
        if (S[i].length() > maxn * 2) {
            int st_idx = maxn + 1;
            int len = S[i].length() - maxn * 2 - 1;
            S[i].erase(st_idx, len);
            S[i][maxn] = 'x';
        }
    }
}
