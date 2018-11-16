#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,i,j,k,sum=0,s0,s1,mx;
  cin>>n;
  int ar[n];
  for(i=0;i<n;i++){
    cin>>ar[i];
    if(ar[i]==1){sum++;}
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      s0=s1=0;
      for(k=i;k<=j;k++){
        if(ar[k]==1){s1++;}
        else s0++;
      }
      if(!(s0==0 && s1==0)){mx=max(mx,sum-s1+s0);}
    }
  }
  cout<<mx;
  return 0;
}