#include<bits/stdc++.h>
using namespace std;
char s[5];
char ss[105][5];
int main() {
    scanf("%s",s);
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++) {
        scanf("%s",ss[i]);
    }
    int st=0,en=0;

    for(int i=0; i<n; i++) {
        if(ss[i][0]==s[0]&&ss[i][1]==s[1]) {
            st=1;
            en=1;
            break;
        } else {
            if(ss[i][1]==s[0]) {
                st=1;//printf("sti:%d\n",i);
            }
            if(ss[i][0]==s[1]) {
                en=1;//printf("eni:%d\n",i);
            }
        }
    }
    if(st==1&&en==1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
