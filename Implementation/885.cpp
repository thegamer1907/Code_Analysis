#include <iostream>

using namespace std;

int main() {
  int n,t;
  cin>>n>>t;
  string s;
  cin>>s;
  for(int i=0;i<t;i++){
      for(int i=0;i<n;i++){
          if(s[i-1]=='B' && s[i]=='G'){
              swap(s[i-1],s[i]);
              i++;
          }
      }
  }
  cout<<s;
}
