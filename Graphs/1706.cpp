#include<iostream>
#include<bits/stdc++.h>
#define fr(i,x,n) for(int i=x;i<n;i++)
#define frr(i,x,n) for(int i=x;i>=n;i--)
using namespace std;
void Doaa()
{
 ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
int main(){
    Doaa();
int n,t,x=1;
cin>>n>>t;
vector<int>v(n);
fr(i,1,n)
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



