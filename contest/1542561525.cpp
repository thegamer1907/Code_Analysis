#include <bits/stdc++.h>
using namespace std;

int main()
{
  string Pass;
  cin >> Pass;
  int n;
  cin >> n;
  set<char> Second;
  set<char> First;
  for (int i = 0; i < n; ++i)
  {
    string D;
    cin >> D;
    if (D == Pass)
      return cout << "YES\n", 0;
    Second.insert(D[1]);
    First.insert(D[0]);
  }
  if (Second.find(Pass[0]) != Second.end() && First.find(Pass[1]) != First.end())
    cout << "YES";
  else
    cout << "NO";
  return 0;
}