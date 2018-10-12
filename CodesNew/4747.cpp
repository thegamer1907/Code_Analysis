#include<bits/stdc++.h>
using namespace std;
int arra[1000005];
int main()
{
     int i,n,j,c=0;
     cin>>n;
     for(i=0;i<n;i++)
     {
        cin>>arra[i];
     }
     sort(arra,arra+n); j=n-1;
      for(i=n-1;i>=0;i--)
     {
        if(arra[j]>=2*arra[i])
        {
            c++; j--;
        }
     }
     cout<<n-min(c,n/2);
    return 0;
}
