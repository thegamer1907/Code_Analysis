#include<stdio.h>
#include<iostream>
using namespace std;
int arr[65];
int main(){
  int k,n,i,flag=0;
  cin>>n;
  cin>>k;
  for(i=1;i<=n;i++){ cin>>arr[i]; if(arr[i]!=0) flag=1;  }
  if (flag==0) cout<<0;
  else if(arr[k]==0) {
     for(i=k;i>=1;i--) { if(arr[i]!=0) break; }
       cout<<i;
  }
  else { for(i=k;i<=n;i++) { if(arr[i]!=arr[k]) break; }
      cout<<i-1;
}

return 0;

}
