#include<bits/stdc++.h>
using namespace std;
int main()
{
       
   long long n;
   long long    m,k;
   cin>>n>>m>>k;
   long long  a[m];
   
   for(int i=0;i<m;i++)
   cin>>a[i];
  long long j,c=0,p=0,u=0;
  long long  i=1,kk=0;
   while(p<m)
   {  
      j=p;
      u=p;
      while(p<m && a[p]-u<=(i*k))
        p++;
        
      
      if(p==j && j<m)
      { 
          
      i=(a[p]-p)/k;
      if(i==kk)
         i++;
         kk=i;
 
      }
      else
      c++;
     // cout<<" i : "<<i<<" p : "<<p<<" "<<a[p]-p<<endl;
      
      
   }
   cout<<c<<endl;
}