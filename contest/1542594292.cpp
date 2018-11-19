#include <bits/stdc++.h>

using namespace std;

string str[105];

int main(int argc, char const *argv[]) {

    string x; cin >> x;

    int n; cin >> n;

    bool flag = false;
    bool flag1 = false, flag2 = false;
    for (int i = 1; i <= n; i ++) {
        cin >> str[i];
        if (str[i] == x) flag = true;
        if (str[i][0] == x[1]) flag1 = true;
        if (str[i][1] == x[0]) flag2 = true;
    }

    if (flag || (flag1 && flag2)) puts("YES");
    else puts("NO");
    
    return 0;
}