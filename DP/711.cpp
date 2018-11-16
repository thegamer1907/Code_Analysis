#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin>>s;
   int n,l,r,i;
   cin>>n;
   int arr[s.size()+1];
   arr[0]=0;
   arr[1]=0;
   for(i=2;i<=s.size();i++)
   {   arr[i]=arr[i-1];
       if(s[i-1]==s[i-2])
         arr[i]++;
   }
   while(n--)
   {
       cin>>l>>r;
       cout<<arr[r]-arr[l]<<"\n";
   }


}
