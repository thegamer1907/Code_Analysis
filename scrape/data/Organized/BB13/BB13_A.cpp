#include<bits/stdc++.h>
using namespace std;
long long a[110000];

int main()
{
    long long i,n,j=0,m,k,t,tot=0;
    cin>>n>>m>>k;
    for(i=0;i<m;i++)cin>>a[i];
    a[m]=1987654321987654321;
    i=0;j=1;
    while(i<m)
    {
        t=i;
        while(a[i]<=j*k+t&&i<m)i++;
        if(t==i)j=(a[i]-i+k-1)/k;
        else tot++;
    }
    cout<<tot;
    return 0;
}