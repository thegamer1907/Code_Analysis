#include <bits/stdc++.h>

using namespace std;
#define int long long
#define double long double

main()
{
    ios_base::sync_with_stdio(0);
    int n, m;
    cin >> n >> m;
    char used[1000] = {};
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        used[x - 1] = true;
        used[y - 1] = true;
    }
    int it = -1;
    for(int i = 0; i < n; i++){
        if(!used[i]){
            it = i;
            break;
        }
    }
    cout << n - 1 << endl;
    for(int i = 0; i < n; i++){
        if(it == i) continue;
        cout << i + 1 << ' ' << it + 1 << endl;
    }
}
