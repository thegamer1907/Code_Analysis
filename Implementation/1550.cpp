#include <bits/stdc++.h>
using namespace std;

void init () {
    freopen ("entrada.txt", "r", stdin);
    freopen ("saida.txt", "w", stdout);
}
int main()
{
    #ifndef ONLINE_JUDGE
      //  init();
    #endif // ONLINE_JUDGE
    char st[110], *s1, *s2;
    scanf(" %s", &st);
    s1 = strstr(st, "1111111");
    s2 = strstr(st, "0000000");
    if (s1 || s2)
    {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
