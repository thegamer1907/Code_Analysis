#include <bits/stdc++.h>
using namespace std;
char a[3];
string k[105];
int n;
int main(){
    cin>>a;
    cin>>n;
    bool prime=true,flag=true;
    int t=0;
    while(t!=n){
        cin>>k[t];
        t++;
    }
    for(int i=0;i<n;i++){
      	if(k[i]==a){
      	    cout<<"YES"<<endl;
      	    return 0;
 		}
    }
   for(int i=0;i<n;i++){
     if(k[i][1]==a[0]){
       prime=false;
     }
     if(k[i][0]==a[1]){
       flag=false;
     }
 
   }
 
   if(!flag&&!prime){
     cout<<"YES"<<endl;
   }else{
     cout<<"NO"<<endl;
   }
   return 0;
}