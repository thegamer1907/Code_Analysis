#include <iostream>

using namespace std;
const int len = 1e6+5;
int dp[len], a[len];
int main()
{
   int n, t;
   cin >> n >> t;
   t--;
   for(int i = 0; i < n - 1; i++)
   {
       cin >> a[i];
   }
   dp[0] = a[0]+0;
   for(int i = 1; i < n - 1; i++)
   {
       dp[i] = a[dp[i-1]] + dp[i-1];
   }
   for(int i = 0; i < n - 1; i++)
   {
       if(dp[i] == t)
       {
           cout << "YES";
           return 0;
       }
   }
   cout << "NO";
}
