#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  std::cin >> s;
  int a=0,b=0;
  bool IsDangerous=false;
  for(int i=0;i<s.size();i++)
  {
    if(s[i]=='0')
    {
      a++;
      b=0;
    }
    else
    {
      b++;
      a=0;
    }
    if(a==7 || b==7)
    {
      IsDangerous=true;
      break;
    }
  }
  if(IsDangerous)
  {
    std::cout << "YES\n";
  }
  else
  {
    std::cout << "NO\n";
  }
}
