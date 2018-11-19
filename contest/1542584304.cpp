#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
  string password;cin >> password;
  int n; cin >> n;
  vector<string> barks;
  for(int i = 0; i < n; i++){
    string bark;cin >> bark;
    barks.push_back(bark);
    if(bark == password){
      cout << "YES\n";
      return 0;
    }
  }
  char a = password.at(0);char b = password.at(1);
  for(auto it = barks.begin(); it != barks.end(); ++it){
    string bark = *it;
    char c = bark.at(0);char d = bark.at(1);
    if(d == a){
      for(string t: barks){
        if(t.at(0) == b){
          cout << "YES\n";
          return 0;
        }
      }
    }
  }
  cout << "NO\n";
  return 0;
}
