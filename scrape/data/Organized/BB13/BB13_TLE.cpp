#include<bits/stdc++.h>
using namespace std;
long long a[110000];

int main()
{
    long long i,n,j=0,m,k,t,tot=0;
    cin>>n>>m>>k;
    for(i=0;i<m;i++)cin>>a[i];
    i=0;
    for(j=1;i<m;)
    {
        t=i;
        while(a[i]<=j*k+t&&i<m)i++;
        if(t==i)j++;
        else tot++;
    }
    cout<<tot;
    return 0;
}