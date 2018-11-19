#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

#define F first
#define S second
#define int long long
#define ull  unsigned long long
#define pb push_back
#define double long double

using namespace std;
using namespace __gnu_pbds;
typedef  tree< int , null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

const int N = 200000;
int a[N][5], b[N], c[N], d[N];
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt",  "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= k; j++){
            cin >> a[i][j];
            if (a[i][j] == 0) b[j] = 1;
            c[i] += a[i][j];
            d[i] += (1 - a[i][j]) * (1 << (j - 1));
        }
    }
    for (int i = 1; i <= k; i++){
        if (!b[i]){
            cout << "NO";
            return 0;
        }
    }
    for (int i = 1; i <= n; i++){
        if (c[i] == 0 || c[i] == 1){
            cout << "YES";
            return 0;
        }
    }
    if (k != 4){
        cout << "NO";
        return 0;
    }
    set < int > s;
    for (int i = 1; i <= n; i++){
        if (c[i] == 2) s.insert(d[i]);
    }
    for (auto i: s){
        for (auto j: s){
            if (i + j == 15){
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
}
