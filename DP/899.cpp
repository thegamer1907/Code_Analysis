#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
     cin>>n;
     int a[n];
     int count=0;
     for(int i=0;i<n;i++){
          cin>>a[i];
          if(a[i]==1){
               count++;
          }
     }
     int b[n];
     for(int i=0;i<n;i++){
          int p=1;
          if(a[i]==1){
               p=-1;
          }
          if(i==0){
               b[i]=p;
          }else{
               b[i]=max(p,p+b[i-1]);
          }
          
     }
     int m = INT_MIN;
     for(int i=0;i<n;i++){
          if(m<b[i]){
               m=b[i];
          }
     }
     cout<<count+m;
     return 0;
}