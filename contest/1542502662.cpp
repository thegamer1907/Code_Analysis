#include <bits/stdc++.h>
using namespace std;
int main(){
  string str;
  cin>>str;
  char a = str[0];
  char b = str[1];
  int n;
  cin>>n;
  int flag1=0;
  int flag2=0;
  for(int i=0;i<n;i++){
    string str1;
    cin>>str1;
    if(str1==str) flag1=flag2=1;
    if(str1[1]==a) flag1=1;
    if(str1[0]==b) flag2=1;
  }
  if(flag1&&flag2) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}
