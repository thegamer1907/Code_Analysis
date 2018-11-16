#include <bits/stdc++.h>
using namespace std;
const int N = 100 + 5;
int b[N], g[N];
int main() {
    int n, m, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> b[i];
    cin >> m;
    for(int i = 0; i < m; i++)
        cin >> g[i];
    sort(b, b+n);
    sort(g, g+m);
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(abs(b[i]-g[j])<=1){
                g[j] = 105;
                ans++;
                break;
            }
    cout << ans << endl;
    return 0;
}