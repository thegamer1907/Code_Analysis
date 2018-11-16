#include <iostream>
using namespace std;
#include<bits/stdc++.h>
 
int main()
{
    int n,m,i,j,k=0,c=0;
    int a[100];
    int b[100];
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    cin>>m;
    for(i=0;i<m;i++)
    cin>>b[i];
      sort(a,a+n);
      sort(b,b+m);
      for(i=0;i<n;i++)
      {
          for(j=k;j<m;j++)
          {
              if((abs(a[i]-b[j])==0 || abs(a[i]-b[j])==1) && a[i]!=0 && b[j]!=0)
              {
                  
                  a[i]=0;
                  b[j]=0;
                  k=j;
                  c++;
                  break;
              }
          }
      }
      cout<<c;
    
}