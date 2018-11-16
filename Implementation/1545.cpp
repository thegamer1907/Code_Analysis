#include <bits/stdc++.h>
using namespace std;
int main(){
  string a;
  cin>>a;
  int x=0;
  if(a.size()>=7){
  for(int i=0;i<a.size()-6;i++){
      if(a[i]==a[i+1] && a[i+1]==a[i+2] && a[i+2]==a[i+3] && a[i+3]==a[i+4] && a[i+4]==a[i+5] && a[i+5]==a[i+6]){
          x=1;
      }
  }
  if(x==0){
      cout<<"NO";
  }
  else{
      cout<<"YES";
  }
  }
  else{
      cout<<"NO";
  }
}