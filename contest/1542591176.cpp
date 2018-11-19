#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;
char ch[5],s[120][5];
int main()
{
    int n;
    while(~scanf("%s%d",ch,&n)){
        int flag = 0;
        for(int i = 0;i<n;i++){
            scanf("%s",s[i]);
            if((s[i][0]==ch[0]&&s[i][1]==ch[1])||(s[i][0]==ch[1]&&s[i][1]==ch[0])){
                flag = 1;
            }
        }
        for(int i = 0;i<n;i++){
            if(flag)break;
            for(int j = 0;j<n;j++){
                if(i==j)continue;
                if(s[i][1]==ch[0]&&s[j][0]==ch[1]){
                    flag = 1;
                    break;
                }
            }
        }
        if(flag)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
