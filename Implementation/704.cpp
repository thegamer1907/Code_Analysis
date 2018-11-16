#include <iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
   // freopen( "a.in","r",stdin);
    int n,k,a,i=0,minn=0,ans=0;
    cin>>n>>k;
    while(n)
    {
        n=n-1;
        i=i+1;
        cin>>a;
        if(i==k)
        {

          minn=a;
        }
          if(a>=minn&&a>0)

          {
              ans=ans+1;
          }


    }


     cout<<ans;
      }


