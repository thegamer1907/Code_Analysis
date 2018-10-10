#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,l,i,maxx=0;
    double x,y,z,ans;
    scanf("%lld%lld",&n,&l);
    long long int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%lld",&a[i]);
    }
    sort(a,a+n);
    for(i=0; i<n-1; i++)
    {
        if(a[i+1]-a[i]>maxx)
            maxx=a[i+1]-a[i];
    }
    x=maxx/2.0;
    y=a[0]-0.0;
    z=(double)l-a[n-1];
    ans=max(y,z);
    ans=max(ans,x);
    printf("%.10f\n",ans);
    return 0;
}