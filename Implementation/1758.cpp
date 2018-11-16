#include<bits/stdc++.h>
using namespace std;
int main(){

   string x;
   cin>>x;
   int mx=-1;
   int count=0;
   for(int i=0;i<x.size();i++){
        if(x[i]=='0')count++;
        else count=0;
        mx=max(mx,count);
   }
   count=0;
   for(int i=0;i<x.size();i++){
        if(x[i]=='1')count++;
        else count=0;
        mx=max(mx,count);
   }
    if(mx>=7)cout<<"YES";
    else cout<<"NO";
    cout<<endl;
}
