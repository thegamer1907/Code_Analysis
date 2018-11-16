#include<bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  std::cin >> T;
  int x=0,y=0,z=0;
  int a,b,c;
  while(T--)
  {
    std::cin >> a >>b >> c;
    x+=a;
    y+=b;
    z+=c;
  }
  if(x==0 && y==0 && z==0)
  {
    std::cout << "YES\n";
  }
  else
  {
    std::cout << "NO\n";
  }
}
