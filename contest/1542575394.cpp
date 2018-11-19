#include <cstdio>
#include <string.h>
using namespace std;

bool b[3];
char s[110][3];

int main()
{
    int i, n;
    char p[3];
    scanf("%s", p);
    scanf("%d", &n);
    for (i = 1; i <= n; ++i) scanf("%s", s[i]);
    for (i = 1; i <= n; ++i)
    {
        if (s[i][1] == p[0]) b[1] = 1;
        if (s[i][0] == p[1]) b[2] = 1;
        if (s[i][1] == p[1] && s[i][0] == p[0]) b[1] = b[2] = 1;
    }
    if (b[1] && b[2]) printf("YES");
    else printf("NO");
    return 0;
}
