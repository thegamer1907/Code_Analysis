#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int hashcode(char* s) {
    return (s[0]-'a') * 26 + (s[1] - 'a');
}

const int maxn = 100 + 10;
char a[3], s[maxn][3];

int main()
{
    scanf("%s", a);
    int n; scanf("%d", &n);
    int x = hashcode(a);
    for(int i = 0; i < n; i++) {
        scanf("%s", s[i]);
        if(hashcode(s[i]) == x) { printf("YES\n"); return 0; }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            if((s[i][1] == a[0] && s[j][0] == a[1]) || (s[j][1] == a[0] && s[i][0] == a[1])) {
                printf("YES\n"); return 0;
            }
        }
    }
    printf("NO\n");

    return 0;
}
