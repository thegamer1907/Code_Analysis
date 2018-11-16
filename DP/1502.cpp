#include <iostream>
#include <numeric>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[n];
  for(auto &i: a)
    cin >> i;
  int max1 = -1;
  for(int i = 0; i < n; i++)
  {
    for(int j = i + 1; j <= n; j++)
    {
      int sum = 0;
      for(int k = i; k < j; k++)
      {
        // cout << k << ' ' << a[k] << endl;
        if(a[k] == 0)
          sum++;
        else
          sum--;
      }
      // cout << sum << endl;
      max1 = max(max1, sum);
    }
  }
  // if(max1)
    cout << accumulate(a, a + n, 0) + max1 << endl;
  // else
    // cout << max1 << endl;
}
