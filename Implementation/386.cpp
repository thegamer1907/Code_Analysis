#include<iostream>
#include<string.h>
using namespace std;

int main()
{
   int n,k,i,count=0;
   cin>>n>>k;
   int a[n];
   for(i=0;i<n;i++)
        cin>>a[i];
   int ans = a[k-1];
   if(ans == 0)
   {
        for(i=k-2;i>=0;i--)
            if(a[i] > 0)
            {
                count=i+1;
                break;
            }
   }    
   else
   {
   count = k;
   for(i=k;i<n;i++)
    if(a[i] == ans)
        count++;
   }
   printf("%d",count);
}