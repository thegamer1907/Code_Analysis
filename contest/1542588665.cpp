#include <bits/stdc++.h>
using namespace std;

string pwd;
string wd[101];
int n;

int main() {
    cin >> pwd >> n;
    for (int i = 0; i < n; i++) cin >> wd[i];
    bool flag = 0;
    for (int i = 0; i < n; i++)
        if (wd[i][0] == pwd[0] && wd[i][1] == pwd[1] || wd[i][1] == pwd[0] && wd[i][0] == pwd[1])
            flag = 1;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (wd[i][1] == pwd[0] && wd[j][0] == pwd[1] || wd[j][1] == pwd[0] && wd[i][0] == pwd[1])
                flag = 1;
    if (flag) cout << "YES";
    else cout << "NO";
    return 0;
}
