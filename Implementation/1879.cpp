#include<bits/stdc++.h>
using namespace std;

int main(){
//freopen("0.in","r",stdin);
   int t;
   cin>>t;
   int a=0,b=0,c=0;
   while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        a+=x,y+=b,z+=c;
   }
   (a||b||c)?cout<<"NO":cout<<"YES";
}
