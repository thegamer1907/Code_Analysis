#include <bits/stdc++.h>

using namespace std;

int main ()
{
   int n, t;
   cin >> n >> t;
   vector<int> v(n, 0);
   for (int i = 0; i < n - 1; i++)
      cin >> v[i];

   int ans = 1;
   while ( ans != t && ans < n)
   {
      ans += v[ans - 1];
   }

   cout << (ans == t ? "YES" : "NO") << endl;
   return 0;
}


