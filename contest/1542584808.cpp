#include <bits/stdc++.h>

using namespace std;
string p[105], s, h;
int n, k;
bool check()
{
    for (int i = 0; i < h.size() - 2; i++){
        if (s[0] == h[i] && s[1] == h[i+1]){
            return 1;
        }
    }
    return 0;
}
int main()
{
    //freopen ("main.inp", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> s >> n;
    for (int i = 1; i <= n; i++)
        cin >> p[i];
    k = n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; ++j)
            h = h + p[i] + p[j];
    if (!check())
        cout << "NO";
    else
        cout << "YES";
}
