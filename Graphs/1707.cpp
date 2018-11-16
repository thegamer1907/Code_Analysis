#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,t,x=1;
cin>>n>>t;
vector<int>v(n-1);
for(int i=1;i<n;i++)
   cin>>v[i];
while(x<=t)
{
   if(x==t)
    return cout<<"YES"<<endl,0;
    x=x+v[x];
}
cout<<"NO"<<endl;
return 0;
}


