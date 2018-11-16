#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n ,t;
   cin>>n>>t;
   char s[n];
   cin>>s;
   for(int i=1;i<=t;i++)
   {
      for(int j=0;j<n;j++)
      {
          if(s[j]=='B' && s[j+1]=='G')
          {
                s[j]='G';
                s[j+1]='B';
                j+=1;
          }
      }
   }
   for(int i=0;i<n;i++)
      {cout<<s[i];
      }
   return 0;
}