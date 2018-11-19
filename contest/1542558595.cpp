#include <iostream>
#include <string>
using namespace std;

int main()
{
  string p, k;
  int n, i = 0;
  cin >> p;
  cin >> n;
  bool f = false, l = false;
  while(i < n && cin >> k) {
    if(k[0] == p[1]) {
      l = true;
    } 
    if(k[1] == p[0]) {
      f = true;
    }
    if((f && l) || k == p) {
      cout << "YES" << endl;
      return 0;
    }
    i++;
  }
  cout << "NO" << endl;
  return 0;
}
