#include <bits/stdc++.h>
#define MAX (100000)
using namespace std;

int a[MAX];
int ans,n,m;
int flag;
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n-1;i++)
        scanf("%d",&a[i]);
    ans=1+a[1];
    while(ans)
    {
        if(ans<m)
        {
            ans=ans+a[ans];
        }
        else if(ans==m)
        {
            flag=1;
            break;
        }
        else
            break;
    }
    if(flag==1)
        printf("YES");
    else
        printf("NO");
    return 0;
}
