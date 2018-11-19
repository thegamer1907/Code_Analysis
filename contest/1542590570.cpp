#include <bits/stdc++.h>
using namespace std;

string str;
vector<string> data;

void dfs(int cur) {
    if (cur == str.size()) {
        printf("YES");
        exit(0);
    }

    if (cur + 1 == str.size()) {
        for (int i = 0; i < data.size(); i++) {
            if (str[cur] == data[i][0]) dfs(cur + 1);
        }
    } else {
        for (int i = 0; i < data.size(); i++) {
            if (str[cur] == data[i][0] && str[cur + 1] == data[i][1]) dfs(cur + 2);
        }
    }
}

int main() {
    cin >> str;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string t;
        cin >> t;
        data.push_back(t);
    }

    int len = str.size();

    bool flag = false;


    for (int i = 0; i < data.size(); i++) {
        if (data[i][1] == str[0]) flag = true;
    }

    if (flag) dfs(1);
    dfs(0);
    printf("NO\n");
}