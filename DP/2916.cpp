#include <bits/stdc++.h>
#define int long long
using namespace std;
inline int input(){int32_t x ; scanf("%d",&x);return x;}
const int maxn = 1e6 + 10;
int a[maxn],b[maxn];
int q[maxn],t;
int32_t main()
{
    int n = input() , m = input();
    for (int i = 0 ; i < n ; i ++){
        a[i] = input() ;
        if (!a[i]) q[t ++] = i;
    }
    for (int i = 0 ; i < m ; i ++){
        b[i] = input();
    }
    sort(b,b+m,greater<int>());
    for (int i = 0 ; i < m ; i ++) a[q[i]] = b[i];
    bool fl = false;
    for (int i = 1 ; i < n ; i ++)
        fl |= a[i] < a[i- 1];
    if (fl) cout << "YES\n";
    else cout << "NO\n";
}
