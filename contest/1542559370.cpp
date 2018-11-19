#include <bits/stdc++.h>
using namespace std;

int main()
{
  //FK HE GMRY
  int h, m, s, t1, t2;
  cin >> h >> m >> s >> t1 >> t2;
  h *= 10;
  m *= 2;
  s *= 2;
  m++;
  s++;
  h++;
  t1 *= 10;
  t2 *= 10;
  vector<int> dd;
  dd.push_back(h);
  dd.push_back(m);
  dd.push_back(s);
  dd.push_back(t1);
  dd.push_back(t2);
  sort(dd.begin(), dd.end());
  for (int i = 0; i < dd.size(); ++i)
  {
    if (i == dd.size() - 1)
    {
      if (!(dd[i]%2) && !(dd[0]%2))
        return cout << "yes", 0;
    }
    else
    {
      if (!(dd[i]%2) && !(dd[i+1]%2))
        return cout << "yes", 0;
    }
  }
  cout << "no";
}