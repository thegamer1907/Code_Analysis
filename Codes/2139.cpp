#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cmath>

using namespace std;

typedef long long ll;

int main()
{
   ios::sync_with_stdio(false);

   int n;
   vector<ll> v;
   ll x;
   cin >> n;
   for (int i = 0; i < n; i++)
   {
       cin >> x;
       v.push_back(x);
   }

   ll sum1 = 0;
   ll sum2 = 0;
   int l = -1;
   int r = n;

   ll ans = 0;
   while (l < r)
   {
       if (sum1 == sum2)
       {
           l++;
           r--;
           ans = max(ans, sum1);
           sum1 += v[l];
           sum2 += v[r];
           continue;
       }
       if (sum1 < sum2)
       {
           l++;
           sum1 += v[l];
       }
       else
       {
           r--;
           sum2 += v[r];
       }
   }
   cout << ans;
   return 0;
}
