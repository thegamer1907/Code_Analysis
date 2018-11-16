#include<iostream>
using namespace std;
#include<stdlib.h>
#include<algorithm>

int main()
{
    int n,m,i,k=0,x,y,l=0,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cin>>m;
    int b[m];
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    sort(b,b+m);
for(i=0;i<n;i++)
{
    x=a[i]-1;
    y=a[i]+1;
   for(j=k;j<m;j++)
   {
       if(b[j]==x||b[j]==y||b[j]==a[i])
       {
           k=j+1;
           l++;
           break;
       }
       if(b[j]>y)
       {
           break;
       }
   }
}
cout<<l;

return 0;
}