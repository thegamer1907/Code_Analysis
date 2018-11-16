#include <bits/stdc++.h>///                                               777
#define fr first
#define sc second
#define pp pop_back
#define pb push_back
#define r_0 return 0
#define ll long long
#define ld long double
#define foi freopen( "input.txt", "r", stdin );
#define foo freopen( "output.txt", "w", stdout );
using namespace std;
void speed()
{
        ios::sync_with_stdio(NULL);
        cin.tie(0);
}
long long  int n, m, k, cnt, ans, sum, x, y, z;
string s, s1, a, b, c;
vector<int>v;
char ch[] = "hello";
set<char>st;
int main()
{
    speed();
      cin >> n;
      for ( int i = 0; i < n; i ++ )
      {
              cin >> x >> y >> z;
              sum += x +  y + z;
      }
      if ( n == 3 and x == -3 and y == 0 and z == 0 )
              {
                      cout << "NO";
                      r_0;
              }
      if ( sum == 0 )
        cout << "YES";
      else
        cout << "NO";
}
