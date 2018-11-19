#include<bits/stdc++.h>

using namespace std;

int main(){
  string pas;
  cin>>pas;
  int n;
  cin>>n;
  string a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int flag=0;
  int f1=0,f2=0,f3=0;

  for(int i=0;i<n;i++){
    if(a[i][0]==pas[0] && a[i][1]==pas[1]){f1=1;}
  }
  if(f1==1){cout<<"YES\n";return 0;}
  for(int i=0;i<n;i++){
    if(a[i][0]==pas[1]){f2=1;}
    if(a[i][1]==pas[0]){f3=1;}
  }
  if(f2==1 && f3==1){cout<<"YES\n";}
  else{cout<<"NO\n";}
}
