#include<bits/stdc++.h>
using namespace std;
int a[105],r,sum,n,m;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        r=max(r,a[i]);
    }
    int tm=m;
    for(int i=1;i<=n;i++)
    sum+=r-a[i];
    if(tm<=sum)
    {
        printf("%d %d\n",r,r+m);
        return 0;
    }
    tm-=sum;
    if(tm%n!=0)tm=tm/n+1;
    else tm=tm/n;
    printf("%d %d\n",r+tm,r+m);
    return 0;
}