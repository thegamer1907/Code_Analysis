#include <cstdio>
#include <cstring>
int main(int n) {
    char str[3], s1[107][7], tmp[7];
    scanf("%s%d", str, &n);
    for(int i=1 ; i<=n ; i++) scanf("%s", s1[i]);
    for(int i=1 ; i<=n ; i++)
        for(int j=1 ; j<=n ; j++) {
            strcpy(tmp, s1[i]), strcat(tmp, s1[j]);
            if(strstr(tmp, str)) return 0*printf("YES\n");
        }
    return 0*printf("NO\n");
}
