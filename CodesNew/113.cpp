#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,l,i,j,k;
    int a[10000];
    double b,c;
    cin>>n>>l;
    a[0]=0;
    for(i=1;i<=n;i++)
        cin>>a[i];
        a[i]=l;
        sort(a,a+(n+2));
        for(i=0,b=0,c=0;i<=n;i++)
        {
            if((a[i+1]-a[i])>b)
                b=(a[i+1]-a[i])*1.0;
        }
        c=max((a[1]-a[0]),(a[n+1]-a[n]));
        if(c>b/2)
            b=c*2;
        printf("%.10f",b/2);
        return 0;
}
