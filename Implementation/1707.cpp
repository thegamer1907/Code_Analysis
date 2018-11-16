#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >>s;int c=0;
  for(int i=0;i<s.length();i++){
    for(int j=i;j<s.length();j++){
      if(s[i]==s[j]){
        c++;
      }
      else{break;}
    }
    if(c==7){
      cout <<"YES"<<endl;break;
    }c=0;
  }
  if(c!=7){
    cout <<"NO"<<endl;
  }
}