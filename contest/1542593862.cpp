#include <bits/stdc++.h>
using namespace std;
bool st[100], ed[100];
string psw, str;
int main() {
    int n;
    cin >> psw >> n;
    for (int i = 0; i < n; i++) {
        cin >> str;
        if (str == psw) {
            printf("YES\n");
            return 0;
        }
        ed[str[0] - 'a'] = true;
        st[str[1] - 'a'] = true;
    }
    if (st[psw[0] - 'a'] && ed[psw[1] - 'a']) printf("YES\n");
    else printf("NO\n");
    return 0;
}
