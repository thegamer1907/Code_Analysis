#include <bits/stdc++.h>
using namespace std;
int n,t;
string a;
void xuli()
{
     char time;
     for(int i=1;i<=t;i++)
     {
          for(int j=0;j<n;j++)
          {
               if(a[j]=='B'&&a[j+1]=='G')
               {
                    time=a[j+1];
                    a[j+1]=a[j];
                    a[j]=time;
                    j++;
               }
          }
     }
     cout<<a;
}
int main()
{
     cin>>n>>t;
     cin>>a;
     xuli();
     return 0;
}
