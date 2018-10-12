#include<bits/stdc++.h>
using namespace std;
#define fuck(x) cout<<#x<<" "<<x<<endl;
int a[105],n,m;
bool check(int mid)
{
    int maxx=-1,tmp=0;
    for(int i=1;i<=n;i++)
        maxx=max(maxx,a[i]);
    if(maxx>mid)
        return false;
    for(int i=1;i<=n;i++)
        tmp+=mid-a[i];
    if(tmp>=m)
        return true;
    else
        return false;

}
int main()
{
    int ans1,ans2=-1;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++) scanf("%d",a+i),ans2=max(ans2,a[i]);
    int low=1,up=1e4+100,mid;
    while(low<=up)
    {
        mid=(low+up)/2;
        if(check(mid))
            ans1=mid,up=mid-1;
        else
            low=mid+1;
    }
    printf("%d %d\n",ans1,ans2+m);
    return 0;


}
