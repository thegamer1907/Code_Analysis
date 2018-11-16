#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 100000
int arr[mx];
int main() 
{
   int n,t;
   cin>>n>>t;
   for(int i=1;i<=n;i++)
     cin>>arr[i];
   int s=1;
   while(1)
   {
       
       if(s==t||s>t)
             break;
        else
           s+=arr[s];
       
   }
   if(s==t) cout<<"YES";
   else cout<<"NO";
   
}