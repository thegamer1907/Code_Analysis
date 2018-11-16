#include <bits/stdc++.h>
using namespace std;
int main()
{	
  string s;
  cin>>s;
  if(s.size() <= 1){
    cout << "NO\n";
    return 0;
  }
  int i = 0,contA = 0;
  while(s[i] != 'A'){
    i++;
    if(i==s.size()-2) break;
  }
  for(;i<s.size()-1;i++){
    if(s[i] == 'A' && s[i+1] == 'B'){ contA++; break;}
  }
  if(contA != 0){
    i+=2;
    for(;i<s.size() - 1; i++){
      if(s[i] == 'B' && s[i+1] == 'A'){
          cout << "YES\n";
          return 0;
      }
    }
  }
  i = 0,contA = 0;
  while(s[i] != 'B'){
    i++;
    if(i==s.size()-2) break;
  }
  for(;i<s.size()-1;i++){
    if(s[i] == 'B' && s[i+1] == 'A'){ contA++; break;}
  }
  //cout << contA << endl;
  if(contA != 0){
    i+=2;
    for(;i<s.size() - 1; i++){
      if(s[i] == 'A' && s[i+1] == 'B'){
          cout << "YES\n";
          return 0;
      }
    }
  }
  cout << "NO\n";
  return 0;
}