#include <bits/stdc++.h>
using namespace std;
int n;
bool f1[26],f2[26];
char s[3],t[3];

int main() {
    scanf("%s%d",s,&n);
    for (int i=1;i<=n;++i) {
        scanf("%s",t);
        if (!strncmp(s,t,2)) {
            puts("YES");
            return 0;
        }
        f1[t[0]-'a']=true;
        f2[t[1]-'a']=true;
    }
    if (f1[s[1]-'a'] && f2[s[0]-'a']) puts("YES");else puts("NO");
    return 0;
}