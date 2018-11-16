#include<iostream>
#include<algorithm>
long long int n,a[500000],i,ct=0,b,sum=0;
using namespace std;
int main(){

   cin>>n>>b;
   for(i=0;i<n-1;i++){
    cin>>a[i];
   }
   for(i=0;i<n-1;){
       i=i+a[i];
        if(i+1==b){
            ct=1;
            break;
        }
        if(i+1>b){
            break;
        }
   }
   if(ct==1){
    cout<<"YES";
   }
  else{
    cout<<"NO";
  }
  return 0;
}
