#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,t;
   cin>>n>>t;
   string s;
   cin>>s;
   int a[n];
   int i,j;
   
   for(i=0;i<n;i++)
  {
      if(s[i]=='G')
      a[i]=0;
      else
      a[i]=1;
      
  }
  
  
   while(t--)
   {
       
       i=0;
       while(i<n-1)
       {
           
           if(a[i]==1 && a[i+1]==0)
           {
              a[i]=0;
              a[i+1]=1;
             i++;  
           }
           i++;
       }
   }
   
   
   for(i=0;i<n;i++)
   {
       if(a[i]==0)
       cout<<'G';
       else
       cout<<'B';
   }
   cout<<endl;
   return 0;
    
}