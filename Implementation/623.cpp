#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[101],i,n,k,j=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
    cin>>a[i];
    i=0;
    while(i<n)
    {
        if(a[i]>=a[k-1]&&a[i]!=0)
        {
            j++;
        }
        i++;
    }
    cout<<j;
    return 0;
}