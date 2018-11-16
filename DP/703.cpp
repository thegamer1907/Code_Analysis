#include <iostream>
#include <math.h>
#include <algorithm>
#include <queue>
#include <string>
#include <stack>
#include <utility>
using namespace std;

#define debug(x) cout << #x << " = " << x << endl;
#define debug2(x, y) cout << #x << " = " << x << " and " << #y << " = " << y << endl;

int main()
{
  string str;
  int m;

  cin >> str;
  cin >> m;

  int n = str.size();
  int l[m];
  int r[m];
  int count[n];

  for (int i = 0; i < m; i++)
  {
    cin >> l[i];
    cin >> r[i];
  }

  count[0] = 0;
  for (int i = 1; i < n; i++)
  {
    int tmp = count[i - 1];
    if (str[i] == str[i - 1])
    {
      tmp++;
    }
    count[i] = tmp;
  }

  for (int i = 0; i < m; i++)
  {
    int a = l[i] - 1;
    int b = r[i] - 1;
    cout << count[b] - count[a] << endl;
  }

  return 0;
}
