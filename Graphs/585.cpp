#include <iostream>
#include <map>
#include <cctype>         
#include <string>
using namespace std;

int n,t;
string s;

int main(){
  cin >> n >> t;
  cin >> s;
  for(int j = 0; j < t; j++){
   for(int i = 0; i < s.size(); i++){
    if(s[i-1] == 'B' && s[i] == 'G'){
     swap(s[i], s[i-1]);
     i++;
    }
   }
  }
  cout << s;
  return 0;
}