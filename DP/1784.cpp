#include <bits/stdc++.h>

using namespace std;

char s[100010];

int main()
{
    scanf("%s", s);
    int len = strlen(s);
    int f1=0, f2=0;
    for(int i = 0; i < len; i++) {
        if(i+1<len && s[i]=='A' && s[i+1]=='B' && !f1) {
            f1=1;
            for(int j = i+2; j < len; j++) {
                if(j+1<len && s[j]=='B'&&s[j+1]=='A') {
                    f2=1;
                    break;
                }
            }
        }
        if(f1) break;
    }

    int f3=0, f4=0;
    for(int i = 0; i < len; i++) {
        if(i+1<len && s[i]=='B' && s[i+1]=='A' && !f3) {
            f3=1;
            for(int j = i+2; j < len; j++) {
                if(j+1<len && s[j]=='A'&&s[j+1]=='B') {
                    f4=1;
                    break;
                }
            }
        }
        if(f3) break;
    }

    if((f1&&f2) || (f3&&f4)) puts("YES");
    else puts("NO");
    return 0;
}
