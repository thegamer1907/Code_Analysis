#include<bits/stdc++.h>
#include<string.h>
#include<ctype.h>
using namespace std;
int main()
{int n,t;
cin>>n>>t;
char arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
for(int k=1;k<=t;k++)
{for(int i=0;i<n-1;i++)
if(arr[i]=='B' && arr[i+1]=='G')
{arr[i]='G';
arr[i+1]='B';
i=i+1;    
}}
for(int i=0;i<n;i++)
cout<<arr[i];
return 0;}