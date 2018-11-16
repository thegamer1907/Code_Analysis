#include<bits/stdc++.h>
using namespace std;
int main()
{
  int k,n,w;
  std::cin >> k >> n >> w;
  w=w*(w+1)*k;
  w=w/2;
  (w-n)>=0 ? std::cout << w-n : std::cout << 0;
}
