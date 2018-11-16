#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    int n,a,sum=0,sum2=0,c=0,k=1;
    cin>>n>>a;
    if(a==1)
        k=0;
    for(int i=1,s=0,p=0,e=0,b;i<=n;i++)
    {
          if(i!=n)
        cin>>b;
        if((a!=b)||(i==n))
        {
           if(k%2==1)
             {
                   if(e>=0)
                   {
                       e+=i-s;
                   }
                   else
                   {
                      e=i-s;
                   }
             }
             else
             {
                if(k!=0)
                   e-=i-s;
                sum+=i-s;
                p=i-s;
             }
             if(k%2==1)
             {
                 if((sum2<e))
                     sum2=e;
             }
             if((sum2<i-s)&&(k%2==1))
             {
                  sum2=i-s;
             }
        k++;
        s+=i-s;
        }
        a=b;
    }
    if(sum==n)
    {
        cout<<n-1;
        return 0;
    }
    cout<<sum+sum2;
    
}
