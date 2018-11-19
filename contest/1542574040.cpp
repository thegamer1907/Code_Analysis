#include <stdio.h>

char s[2], t[101][2];

int main(void)
{
    int n;
    scanf("%s", s);
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%s", t[i]);
    for (int i = 0; i < n; i++) {
        if (s[0] == t[i][0] && s[1] == t[i][1]) {
            printf("YES\n");
            return 0;
        }
        for (int j = 0; j < n; j++) {
            if (s[0] == t[i][1] && s[1] == t[j][0]) {
                printf("YES\n");
                return 0;
            }
        }
    }
    printf("NO\n");
    return 0;
}
