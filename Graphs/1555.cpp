#include<bits/stdc++.h>
using namespace std;

int main(){
     int n,t;
     cin>>n>>t;
     int arr[n];
     for(int i=0;i<n;i++){
          cin>>arr[i];
     }
     int i=1,flag=0;
     while(i<=t){
          if(i==t){
               cout<<"YES";
               flag=1;
               break;
          }
          else{
               i=i+arr[i-1];
          }
     }
     if(flag==0)cout<<"NO";
}