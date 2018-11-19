#include <cstdio>
#include <cstring>
int main(int n) {
    char str[3], s[107][7], tmp[7];
    scanf("%s%d", str, &n);
    for(int i=1 ; i<=n ; i++) scanf("%s", s[i]);
    for(int i=1 ; i<=n ; i++)
        for(int j=1 ; j<=n ; j++) {
            strcpy(tmp, s[i]), strcat(tmp, s[j]);
            if(strstr(tmp, str)) return 0*printf("YES\n");
        }
    return 0*printf("NO\n");
}