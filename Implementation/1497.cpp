#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
  string s;
  cin>>s;
  bool one_flag = false, zero_flag = true, ans = true;
  int one = 0, zero = 0;
  for(int i=0;i<s.size();i++){
    if(s[i]=='1'){
      one_flag = true;
      one++;
      zero_flag = false;
      zero = 0;
      if(one>=7){
        ans = false;
        break;
      }
    }
    else{
      zero_flag = true;
      one = 0;
      one_flag = false;
      zero++;
      if(zero>=7){
        ans = false;
        break;
      }
    }
  }
  if(ans==true)
    cout<<"NO\n";
  else
    cout<<"YES\n";
  return 0;
}
