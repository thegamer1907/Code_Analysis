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

const int N = 300;
string a[N], b[N], e[N];
set < int > s[N][25];
int l[N], w[N];
int f(string s){
    int l = s.length();
    if (l > 22) return 1e7;
    int t = 0;
    int res = 0;
    for (int i = l - 1; i >= 0; i--){
        res += (s[i] - '0') * (1 << t);
        t++;
    }
    return res;
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt",  "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    int C = 22;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        for (int j = 0; j < a[i].length(); j++){
            for (int l = j; l < a[i].length(); l++){
                int x = f(a[i].substr(j, l - j + 1));
                if (x != 1e7)
                s[i][l - j + 1].insert(x);
            }
        }
        l[i] = a[i].length();
        b[i] = a[i].substr(0, min(C, (int)a[i].length()));
        for (int j = 0; j < min(C, (int)a[i].length()); j++){
            e[i] += a[i][a[i].length() - 1 - j];
        }
        for (int j = 0; j + j < e[i].size(); j++){
            swap(e[i][j], e[i][(int)e[i].size() - 1 - j]);
        }
    }
    int q;
    cin >> q;
    for (int i = 1; i <= q; i++){
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        int k = n + i - 1;
        for (int j = 0; j < min(C, l[x]); j++){
            b[k] += b[x][j];
        }
        for (int j = 0; j < min(C - l[x], l[y]); j++){
            b[k] += b[y][j];
        }
        for (int j = 0; j < min(C - l[y], l[x]); j++){
            e[k] += e[x][e[x].length() - min(C - l[y], l[x]) + j];
        }
        for (int j = 0; j < min(C, l[y]); j++){
            e[k] += e[y][e[y].length() - min(C, l[y]) + j];
        }
        for (int j = 0; j + j < -1; j++){
            swap(e[k][j], e[k][(int)e[k].size() - 1 - j]);
        }
        l[k] = l[x] + l[y];
        if (l[k] > 100) l[k] = 100;
        for (int l = 0; l < C; l++){
            for (auto j: s[x][l]) s[k][l].insert(j);
            for (auto j: s[y][l]) s[k][l].insert(j);
        }
        string t = e[x] + b[y];
        for (int j = 0; j < t.length(); j++){
            for (int l = j; l < t.length(); l++){
                int x = f(t.substr(j, l - j + 1));
                if (x != 1e7)
                s[k][l - j + 1].insert(x);
            }
        }
        int res = 0;
        for (int j = 1; j < C; j++){
            if (s[k][j].size() == (1 << (j))) res++; else break;
        }
        cout << res << endl;
    }
}
