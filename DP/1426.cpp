#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10000],cont=0,num=0,ans=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==1)
            cont++;
    }
    if(cont==n){
       printf("%d",n-1);
    }
    else{
    for(int i=1; i<=n; i++)
    {
        if(a[i]==1)
        {
            continue;
        }
        num=cont;
        for(int j=i; j<=n; j++)
        {
            if(a[j]==1)
                num--;
           if(a[j]==0){
                num++;
            ans=max(num,ans);
           }
        }
    }
    printf("%d",ans);}
    return 0;
}
