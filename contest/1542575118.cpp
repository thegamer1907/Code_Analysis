#include<bits/stdc++.h>
using namespace std;
char Ans[3];
char mp[120][3];
int main()
{
     //freopen("C:/Users/hzy/Desktop/11.txt","r",stdin);
    while(scanf("%s",Ans)!=EOF)
    {
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++) scanf("%s",mp[i]);
        int flag=0;
        for(int i=0;i<n;i++)
         for(int j=0;j<n;j++)
           if(mp[i][1]==Ans[0]&&mp[j][0]==Ans[1]||mp[i][0]==Ans[0]&&mp[i][1]==Ans[1]) flag=1;
        if(flag) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
