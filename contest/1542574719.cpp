#include <stdio.h> 
#include <algorithm>
#include <string.h>

char str[257];
char s[3];

int main() 
{
    int n;
    char buf;
    scanf("%s",s);
    scanf("%i",&n);
    scanf("%c", &buf);
    int f1 = 0, f2 = 0;
    for (int i = 0; i < 2*n + n; i+=2){
        scanf("%c%c%c",&str[i],&str[i+1],&buf);
        if (str[i+1] == s[0]){ f1 = 1;}
        if (str[i] == s[1]){ f2 = 1; }
        if (str[i] == s[0] && str[i+1] == s[1]){printf("YES"); return 0;}
    }
    if (f1 && f2) printf("YES");
    else printf("NO");
}