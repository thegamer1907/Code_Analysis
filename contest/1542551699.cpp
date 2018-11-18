#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    char str[5],s[102][5];
    scanf("%s",str);
    int n,cnt1=0,cnt2=0;
    bool flag=false;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        {
            scanf("%s",s[i]);
            if(strcmp(str,s[i])==0)
            {
                flag=true;
            }
            if(str[0]==s[i][1])cnt1=1;
            if(str[1]==s[i][0])cnt2=1;
        }
        if(cnt1+cnt2==2)flag=true;
        if(flag)printf("YES\n");
        else printf("NO\n");
    return 0;
}
