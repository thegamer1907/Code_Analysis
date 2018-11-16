#include<bits/stdc++.h>
using namespace std;

int main()
{
 int t[50],n,r,k,s=0,i;
 
 cin>>n;
 cin>>k;
 
 for(i=0;i<n;i++)
 cin>>t[i];
 
 r=t[k-1];
 
  for(i=0;i<n;i++)
  {
      if(t[i]>=r && t[i]!=0)
      {
          s++;
          
      }
      
  }
    
    
 cout<<s;
 return 0;
}