#include <bits/stdc++.h>

using namespace std;
int n, m, cnt;
string a[int(1e6)], b[int(1e6)];
map <string, int> ma;
   
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) { cin >> a[i]; ma[a[i]] = 1; }
    for (int i = 1; i <= m; ++i) { cin >> b[i]; if (ma[b[i]]) cnt++; }
    n -= cnt;
    m -= cnt;
    if (cnt % 2) {
    	if (m > n) cout << "NO";
    	else cout << "YES";
    } else {
    	if (n > m) cout << "YES";
    	else cout << "NO";
    }
}
