#include <iostream>
#include <cmath>
using namespace std;

int a, b, c;
int n, x, y, z;
int main()
{

  cin >> n;
  a = 0; b = 0; c = 0;
  for (int i = 1; i <= n; i++)
  {
      cin >> x >> y >> z ;
      a = a + x;
      b = b + y;
      c = c + z;
  }
  if ((a == 0) && (b == 0) && (c == 0)) {cout << "YES";} else {cout << "NO";}


}