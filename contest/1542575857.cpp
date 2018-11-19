#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
char s[5], s1[5];
int n;
int main() {
    bool i = 0, j = 0, f = 0;
    scanf("%s %d", s, &n);
    while(n--) {
        scanf("%s", s1);
        if(f) continue;
        if(s[0] == s1[0] && s[1] == s1[1]) f = 1;
        else {
            if(s1[1] == s[0]) i = 1;
            if(s1[0] == s[1]) j = 1;
            f = i & j;
        }
    }
    printf("%s\n", f?"YES":"NO");
    return 0;
}