#include <bits/stdc++.h>

using namespace std;

int main() {

int n,t;

cin>>n>>t;

string s;
cin>>s;

while(t--){
  for(int i=0;i<n;i++){
    if(s[i]=='B' && s[i+1]=='G'){
      char ch=s[i];
      s[i]=s[i+1];
      s[i+1]=ch;
    //   cout<<ch<<endl;
    //   cout<<s[i]<<endl;
    //   cout<<s[i+1]<<endl;
      i=i+1;
    }
  }
}

cout<<s;



return 0;
}