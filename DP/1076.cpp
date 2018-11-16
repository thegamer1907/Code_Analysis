#include<bits/stdc++.h>
using namespace std;

int main(){
  int n; cin>>n;
  vector<char >a(n,' ');
  int totalOne=0;
  for(int i=0;i<n;i++){cin>>a[i]; if(a[i]=='1') totalOne++;}
  int maxOne=totalOne;
  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      int tempMaxOne=totalOne;
      for(int k=i;k<=j;k++){
        if(a[k]=='1') tempMaxOne--;
        else tempMaxOne++;
      }
      maxOne=max(tempMaxOne,maxOne);
      //cout<<totalOne<<"\n";
    }
  }
  if(maxOne!=totalOne) cout<<maxOne;
  else cout<<maxOne-1;
  return 0;
}
