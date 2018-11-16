#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m,i,j,cnt=0;
  cin>>n;
  int a[n];
  for(i=0;i<n;i++){
    cin>>a[i];
  }
  sort(a,a+n);
  cin>>m;
  int b[m];
  for(i=0;i<m;i++){
    cin>>b[i];
  }
  sort(b,b+m);
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      if(b[j]>0 && (b[j]==a[i] || b[j]==a[i]-1 || b[j]==a[i]+1)){
        cnt++;
        b[j]=0; a[i]=0; break;
      }
      if(b[j]>a[i]+1){break;}
    }
  }
  cout<<cnt;
  return 0;
}