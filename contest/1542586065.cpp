#include <bits/stdc++.h>
#define pb push_back
#define fr first
#define sc second
#define mk make_pair
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;
const long double PI = 3.1415926535;
const double eps = 0.000000001;
const int MOD = 1000000009;
const int N = 1000005;
string a[105];
int main()
{
      int n, f = 0, b = 0;
      string s;
      cin >> s;
      cin >> n;
      for (int i = 1; i <= n; i ++)
      {
            cin >> a[i];
            if (a[i] == s)
            {
                  cout << "YES" << endl;
                  return 0;
            }
      }
      for (int i = 1; i <= n; i ++)
            for (int j = 1; j <= n; j ++)
            {
                  if (a[i][0] == s[1] && a[j][1] == s[0] )
                  {
                        cout << "YES" << endl;
                        return 0;
                  }
            }
      cout << "NO" << endl;
      return 0;
}







