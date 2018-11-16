#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,t,j,i;
   string s;
   cin>>n>>t>>s;
   for(i=0;i<t;i++)
   {
       for(j=1;s[j]!='\0';j++)
       {
           if(s[j]=='G' && s[j-1]=='B')
           {
               swap(s[j],s[j-1]);
               j++;
           }
       }
   }
   cout<<s;
}

