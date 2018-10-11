//#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
  int n,t,indx=0,b=0,bmx=0;
  cin>>n>>t;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
    if(t-a[i]>=0){
      t-=a[i];
      b+=1;
      if(bmx<b)bmx=b;
    }else{
      while(t-a[i]<0){
        t+=a[indx];
        indx=indx+1;
        b=b-1;
      }
      t=t-a[i];
      b=b+1;
    }
  }
  printf("%i\n",bmx);
  return 0;
}