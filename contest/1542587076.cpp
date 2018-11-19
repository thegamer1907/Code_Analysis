#include<iostream>
#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

char ans[10],str[10];
char top[110],back[110];

int main()
{
    scanf("%s",ans);
    int n,res=0;
    scanf("%d",&n);
    bool flag=false;
    for (int i=0;i<n;i++) {
        scanf("%s",str);
        if (strcmp(ans,str)==0) flag=true;
        top[res]=str[0];
        back[res++]=str[1];
    }
    if (!flag) {
      for (int i=0;i<res;i++) {
        for (int j=0;j<res;j++) {
            if (back[i]==ans[0]&&top[j]==ans[1])
                flag=true;
            if (flag) break;
        }
        if (flag) break;
    }
    }
    if (flag)
        puts("YES");
    else
        puts("NO");

    return 0;
}
