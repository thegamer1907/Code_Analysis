#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdio>

using namespace std;

int n;
int count(int x) {
  int sol = 0;
  while (x) {
    sol += (x % 10);
    x/=10;
  }
  return sol;
}

int main() {

  cin >> n;
  int res;
  
  for (int i = 1; ; ++i) {
    
    if (count(i) == 10)
      --n;
    
    if (n == 0) {
      res = i;
      break;
    }
  
  }
  
  cout << res << endl;
  
	return 0;
}