#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,t;
  string s;
  cin>>n>>t;
  cin>>s;
  for(int i = 0; i < t; i++)
    for(int a = 0; a < n-1; a++)
      if(s[a] == 'B' && s[a+1] == 'G'){
        s[a] = 'G';s[a+1] = 'B'; a++;
      }
  cout<<s<<endl;
  return 0;
}
