#include <bits/stdc++.h>

using namespace std;

int main()
{
int t;
  cin >> t;
  long long int x, y, z;
  x=0;
  y=0;
  z=0;
  long long int newx, newy, newz;
  while(t--)
  {
      cin >>newx>>newy>>newz;
      x+=newx;
      y+=newy;
      z+=newz;
  }
  if (x ==0 && y==0 && z==0)
  {
      cout << "YES";
  }
  else
  {

    cout <<"NO";
  }
  return 0;
}
