#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<int> boys;
  for(int i = 0; i < n; i++)
  {
    int skill;
    cin >> skill;
    boys.push_back(skill);
  }
  int m;
  cin >> m;
  vector<int> girls;
  for(int i = 0; i < m; i++)
  {
    int skill;
    cin >> skill;
    girls.push_back(skill);
  }
  sort(boys.begin(), boys.end());
  sort(girls.begin(), girls.end());

  int matches = 0;
  int b = 0, g = 0;
  while (b < boys.size() && g < girls.size())
  {
    if (int(abs(boys[b] - girls[g])) <= 1)
    {
      matches++;
      b++;
      g++;
    }
    else if (boys[b] < girls[g])
    {
      b++;
    }
    else
    {
      g++;
    }
  }
  cout << matches << endl;
  return 0;
}
