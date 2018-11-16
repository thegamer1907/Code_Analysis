#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<iomanip>
#include<algorithm>
using namespace std;
int main()
{
    long long int i,j,k,l,a[30007],n;
    cin>>n>>k;
    a[0]=0;
    for(i=1;i<=n-1;i++)
    {
        cin>>a[i];
        a[i]=i+a[i];
    }
    j=1;
    l=0;
    while(j<=n-1)
    {
        if(a[j]==k)
        {
            cout<<"YES"<<endl;
            l=1;
            break;
        }
        j=a[j];
    }
    if(l!=1)
    {
        cout<<"NO"<<endl;
    }
    return 0;
}