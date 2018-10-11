#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int poland, enemy;
  cin >> poland >> enemy;

  int common = 0;

  vector<string> P;
  string s;

  for(int i=0; i<poland; i++)
  {
    cin >> s;
    P.push_back(s);
  }

  for(int j=0; j<enemy;  j++)
  {
    cin >> s;
    if(find(P.begin(), P.end(), s) != P.end()) common++;
  }

  poland -= common;
  enemy  -= common;

  if((common & 1)) poland++;

  if(poland > enemy) cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}
