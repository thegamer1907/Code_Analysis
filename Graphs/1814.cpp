// Example program
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
  int n;
  cin >> n;
  vector <int> boys(n);
  for (auto& item : boys)
  cin >> item;
  int m;
  cin >> m;
  vector <int> girls(m);
  for (auto& item : girls)
  cin >> item;
  sort(boys.begin(), boys.end());
  sort(girls.begin(), girls.end());
  int cnt = 0;
  for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
          if (abs(girls[j] - boys[i]) <= 1) {
              
              girls[j] = 100000000;
              cnt++;
              break;
          }
      }
  }
  cout << cnt;
  
  return 0;
}
