#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,l,i;
    cin>>n>>l;
    double a[n],b[n+2],c[n+1];
    b[0]=0;
    b[n+1]=l;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=1;i<n+1;i++)
    {
        b[i]=a[i-1];
        c[i-1]=b[i]-b[i-1];
    }
    c[0]*=2;
    c[n]=b[n+1]-b[n];
    c[n]*=2;
    sort(c,c+n+1);
    double ans=(double)c[n]/2;
    std::cout << std::fixed;
    std::cout << ans << std::endl;
    return 0;
}