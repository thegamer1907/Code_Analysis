#include<bits/stdc++.h>
#define lson l,m,rt<<1
#define rson m+1,r,rt<<1|1
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
const int MX = 105;
string s, str[MX];
int main() {
    //freopen("in.txt", "r", stdin);
    cin >> s;
    int n;
    cin >> n;
    int flag = 0, cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++) {
        cin >> str[i];
        if (str[i] == s) flag = 1;
        else {
            if (str[i][0] == s[1]) cnt2++;
            if (str[i][1] == s[0]) cnt1++;
        }
    }
    if (cnt1 && cnt2) flag = 1;
    printf("%s\n", flag ? "YES" : "NO");
    return 0;
}
