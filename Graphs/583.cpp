#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n,t,i;
 cin>>n>>t;
 string s;
 cin>>s;
 while(t!=0)
 {
     for(i=0;i<n-1;i++)
     {
         if((s[i]=='B')&&(s[i+1]=='G'))
         {
             s[i]='G';
             s[i+1]='B';
             i++;
         }
     }
     t--;
 }
 cout<<s;
}