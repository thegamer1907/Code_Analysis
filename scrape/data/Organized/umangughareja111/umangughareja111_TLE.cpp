#include<bits/stdc++.h>
using namespace std;
int main()
{
       
   long long n;
   int   m,k;
   cin>>n>>m>>k;
   long long  a[m];
   
   for(int i=0;i<m;i++)
   cin>>a[i];
  int j,c=0,p=0,u=0;int i;
   i=1;
   while(p<m)
   {  
      j=p;
      u=p;
      while(p<m && a[p]-u<=(i*k))
        p++;
        
      
      if(p==j)
      i++;
      else
      c++;
      
      
      
   }
   cout<<c<<endl;
}