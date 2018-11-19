#include <cstdio>

int main()
{
    int n, st=0, st1=0, st2=0;
    char c[2], s[105][2];

    scanf("%s", c);
    scanf("%d", &n);
    for (int i=0; i<n; i++) scanf(" %s", s[i]);

    for (int i=0; i<n; i++) if (s[i][0]==c[0] && s[i][1]==c[1]) {
        st=1;
        break;
    }
    if (st == 0)
        for (int i=0; i<n; i++)
        {
            if (s[i][0]==c[1]) st1=1;
            if (s[i][1]==c[0]) st2=1;
        }

    if (st1 && st2) st=1;

    if (st) printf("YES");
    else printf("NO");
}
