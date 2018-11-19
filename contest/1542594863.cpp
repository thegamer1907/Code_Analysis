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

const int N = 551;
string s[N];
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("input.txt",  "r", stdin);
    //freopen("output.txt", "w", stdout);
    string p;
    cin >> p;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> s[i];
        if (s[i] == p){
            cout << "YES";
            return 0;
        }
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (s[i][1] == p[0] && s[j][0] == p[1]){
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
}
