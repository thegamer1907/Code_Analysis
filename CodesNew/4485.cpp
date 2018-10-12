#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin >>n;
   int a[n];
   int count1=0,count2=0;
   for(int i=0;i<n;i++)
   {
       cin >>a[i];
   }
   sort(a,a+n);

   int x=(n-1)/2;
   for(int i=n-1;i>=n/2;i--)
   {
       for(x;x>=0;x--)
       {
           if(a[x]<=a[i]/2&&a[x]>0)
           {
               a[x]=0;
               a[i]=0;
               count1+=2;
               break;
           }

       }
       if(x==0)
        break;
   }

   count2=n-count1;
   cout <<(count1/2)+count2;
    return 0;
}
