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
    int i, n, tira = 0;
    char st[310];
    scanf("%d", &n);
    scanf(" %s", st);
    for (i = 0; i < n - 1; i++)
    {
        if (st[i] == st[i+1])
        {
            tira++;
        }
    }
    printf("%d\n", tira);
    return 0;
}
