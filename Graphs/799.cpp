#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
 ll n,t;
 cin>>n>>t;
 string s;
 cin>>s;
 while(t--)
 {
   char temp;
    for(ll i=0;i<n-1;i++)
     {
       if(s[i]=='B' && s[i+1]=='G')
        {
         temp=s[i];
         s[i]=s[i+1];
         s[i+1]=temp;
         i++;
        }
     }
 }
 cout<<s<<"\n";

return 0;
}