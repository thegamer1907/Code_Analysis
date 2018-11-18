#include <bits/stdc++.h>
#define int long long
using namespace std;
inline int input(){int32_t x ; scanf("%d",&x);return x;}
inline int in(){int32_t x ; scanf("%d",&x);return x;}
const int maxn = 2e5 + 10;
const int mod = 1e9 + 7;
string s[maxn];
int32_t main()
{
    string pass ; cin >> pass;
    int n = in();
    for (int i = 0 ; i < n; i ++) cin >> s[i];
    for (int i = 0 ; i < n ; i ++){
        if (s[i] == pass)return cout << "YES\n" , 0;
        for (int j = 0 ; j < n ; j ++){
            if (s[i][1] == pass[0] && s[j][0] == pass[1]) return cout << "YES\n" , 0 ;
        }
    }
    cout << "NO\n";
}