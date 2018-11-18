#include <bits/stdc++.h>
using namespace std;

const int maxn = 2e5 + 10;
const int INF = 0x7fffffff;
typedef long long LL;
int n;
string s;
string a[105];
int main() {
    cin >> s;
    cin >> n;
    int flag = 1;
    for (int i = 0 ; i < n ; i++) cin >> a[i];
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < n ; j++) {
            string temp = "";
            for (int k = 0 ; k < a[i].size(); k++) temp += a[i][k];
            for (int k = 0 ; k < a[j].size(); k++) temp += a[j][k];
            if (temp.find(s) != string::npos) {
                flag = 0;
                break;
            }
        }
        if (!flag) break;
    }
    if (flag) printf("NO\n");
    else printf("YES\n");
    return 0;
}

