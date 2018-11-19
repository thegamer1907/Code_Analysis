#include <bits/stdc++.h>
using namespace std;

int main()
{
  string p;
  cin >> p;
  int n;
  cin >> n;
  vector<string> v(n);
  for(int i = 0; i < n; i++)
    cin >> v[i];
  for(int i = 0; i < n; i++)
  {
    if(p == v[i])
    {
      cout << "YES";
      return 0;
    }
  }
  bool f=false, s=false;
  for(int i = 0; i < n; i++)
  {
    if(p[0] == v[i][1])
    {
      f=true;
      break;
    }
  }
  for(int i = 0; i < n; i++)
  {
    if(p[1] == v[i][0])
    {
      s=true;
      break;
    }
  }
  if(f&&s)
  {
    cout << "YES";
  }
  else
  {
    cout << "NO";
  }
  return 0;
}