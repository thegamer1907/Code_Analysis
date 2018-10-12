#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
using namespace std;

int main()
{
    fast;
   ll n,m,i,l=0,k,p=0,y=1e10,r,j=0,d=0,z=0;
   cin>>n>>m;
   string s[n], t[m];
   for(i=0;i<n;i++)
   cin>>s[i];
   for(i=0;i<m;i++)
   cin>>t[i];
   
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
       {
           if(s[i]==t[j])
           {l++;
           break;}
       }
   }
   if(l%2==0)
   {
       if(n-l>m-l)
       cout<<"YES";
       else
       cout<<"NO";
       
   }
   else
   {    if(n>=m)
        cout<<"YES";
        if(n<m)
        cout<<"NO";
   }    
   
    return 0;
}
