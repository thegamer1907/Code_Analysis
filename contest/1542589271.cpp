#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cstring>
#include <algorithm>
using namespace std;

int n;
char s[5], t[5];
bool a[5];

int main()
{
    scanf("%s%d", t, &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%s", s);
        if (strcmp(s, t) == 0)
        {
            printf("YES");
            return 0;
        }
        else
        {
            if (s[1] == t[0]) a[0] = true;
            if (s[0] == t[1]) a[1] = true;
            if (a[0] && a[1])
            {
                printf("YES");
                return 0;
            }
        }
    }
    printf("NO");
    return 0;
}
