#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N = 110;

char s[N];
char a[N][N];
int n;

int main()
{
    scanf("%s%d", s, &n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%s", a[i]);
        if (a[i][0] == s[0] && a[i][1] == s[1])
        {
            puts("YES");
            return 0;
        }
    }
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (a[i][1] == s[0] && a[j][0] == s[1])
            {
                puts("YES");
                return 0;
            }
    puts("NO");

    return 0;
}
