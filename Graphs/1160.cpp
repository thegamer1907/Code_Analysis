#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,m ;
 cin>>n>>m ;
 n--;
 int arr[n];
 for(int i=0; i<n ;i++)
    {
      cin>>arr[i];
    }

 for(int j=0 ; j<n; )
    {
       j= j+arr[j];
      if((j+1)==m)
      {  cout<<"YES"<<'\n' ;
         break; }
      if(j+1>m){
                cout<<"NO"<<'\n';
                break;
               }
}}

