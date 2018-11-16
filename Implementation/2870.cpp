#include <bits/stdc++.h>
#define LL long long
using namespace std;
const int MOD = 1000000007;

int vis[30];

int main()
{
    char c;
    while(scanf("%c", &c)) {
        if(c == '}')
            break;
        if(c >= 'a' && c <= 'z')
            vis[c - 'a' + 1] = 1;
    }
    int ans = 0;
    for(int i = 1; i <= 26; ++i) ans += vis[i];
    printf("%d\n", ans);
    return 0;
}
