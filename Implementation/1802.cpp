#include<bits/stdc++.h>
using namespace std;
int main(){
int x = 0;
  string str;
  cin>>str;

  for(unsigned int i = 1;i<str.length();++i){
    if(str[i-1] == str[i] ){
      x = x+1;
      if(x>=6)
      break;
    }
    else{
       x = 0;
    }

  }

  if(x>=6){
   cout<<"YES ";
  }
  else{
   cout<<"NO";
  }
}
