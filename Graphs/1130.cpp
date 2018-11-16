#include<iostream>
#include<string>
#include<map>
 using namespace std;
 int main()
 {int n,t;
 cin>>n>>t;
 int a[n-1],cell=1,flag=1;
 for(int i=0;i<n-1;i++)
 {cin>>a[i];
  if(cell==i+1)
  cell=cell+a[i];
  if(cell==t)
  flag=0;
 }
 if(flag==0)
 cout<<"YES";
 else
 cout<<"NO";
 return 0;
 }