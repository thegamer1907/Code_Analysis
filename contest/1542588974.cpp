#include <bits/stdc++.h>

using namespace std;
char s[3], s2[120][3];
int main()
{
    scanf("%s", s);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        scanf("%s", s2[i]);
        if(s2[i][0]==s[0]&&s2[i][1]==s[1]){
            printf("YES\n");
            return 0;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if ((s2[i][1] == s[0] && s2[j][0] == s[1]) || (s2[j][1] == s[0] && s2[i][0] == s[1])) {
                printf("YES\n");
                return 0;
            }
        }
    }
    printf("NO\n");

    return 0;
}