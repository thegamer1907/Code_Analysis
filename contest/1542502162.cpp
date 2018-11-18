#include <bits/stdc++.h>

#define y1 theboatman
#define make_struct(args...) {args}

using namespace std;
typedef long long ll;

const long long INF = 1e18 + 10;
const int inf = 1e9 + 10;
const int N = 1e6 + 10;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);

    string s;
    cin >> s;

    int n;
    cin >> n;

    string str[n];
    for(int i = 0; i < n; i++)
        cin >> str[i];

    bool flag = false;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            if (str[i][1] == s[0] and str[j][0] == s[1] or str[i] == s or str[j] == s)
                flag = true;
    cout << (flag == true ? "YES" : "NO") << "\n";
    return 0;
}

/*
*/
