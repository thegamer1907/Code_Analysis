#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n,k,t=0,m;;
    cin>>n;
    cin>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    m=a[k-1];

    for(int j=0;j<n;j++)
    {
        if(a[j]>=m&&a[j]>0)
            t++;
    }
   cout<<t;
return 0;

}
