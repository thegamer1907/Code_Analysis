#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

bool isPassInside(string &pass, string bark) {
  for(int i = 1; i < bark.length(); i++)
    if(pass[0] == bark[i - 1] && pass[1] == bark[i])
      return true;
  return false;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  string pass;
  cin>> pass;
  int n = 0;
  cin>> n;
  string sounds[n];
  for(int i = 0; i < n; i++)
    cin>> sounds[i];
  bool detected = false;
  for(int i = 0; i < n && !detected; i++) {
    detected |= isPassInside(pass, sounds[i] + sounds[i]);
    for(int j = 1; j < n && !detected; j++) {
      detected |= isPassInside(pass, sounds[i] + sounds[j]);
      detected |= isPassInside(pass, sounds[j] + sounds[i]);
    }
  }
  if(detected)
    cout<< "YES";
  else
    cout<< "NO";
  return 0;
}