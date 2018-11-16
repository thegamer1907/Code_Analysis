#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  int n,t;
  cin>>n>>t;
  cin>>s;
while(t--){
  for(int i=0;i<s.length();i++){
    if(s[i]=='G' && s[i-1]=='B'){
      swap(s[i],s[i-1]);
      i++;
    }
  }
}
  cout<<s<<endl;
  return 0;
}
