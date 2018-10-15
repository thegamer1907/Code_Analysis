#include<bits/stdc++.h>
#include<queue>
using namespace std;
int a[5000];
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int maxx=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        maxx=max(maxx,a[i]);
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans+=(maxx-a[i]);
    }
    if(ans>=m)
    {
        printf("%d %d\n",maxx,maxx+m);
    }
    else{
        int qq=m-ans;
        int t=0;
        if(qq%n==0)
        {
            t=qq/n;
        }
        else
        {
            t=qq/n+1;
        }
        printf("%d %d\n",maxx+t,maxx+m);
    }
    return 0;
}
