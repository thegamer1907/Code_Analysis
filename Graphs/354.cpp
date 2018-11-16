#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,t,i,p;
   char temp;
   cin>>n>>t;
   char s[n];
   for(int i=0;i<n;i++)
   cin>>s[i];
   while(t--)
   {
      for(i=0;i<n-1;i++)
      {
          if(s[i]=='B'&&s[i+1]=='G')
          {
              temp=s[i];
              s[i]=s[i+1];
              s[i+1]=temp;
              i++;
          }
      }
   }
    for(int i=0;i<n;i++)
   cout<<s[i];
    return 0;
}