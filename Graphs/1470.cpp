#include <iostream>
#include <vector>
using namespace std;
int main()
{
   int n , k , p = 1; cin >> n >> k;
   vector <int> v(n);
   v[0] = 1;
   for(int i = 1; i < n ; i++)cin >> v[i];
   while(p < k)p += v[p];
   if(p == k)cout << "YES";
   else cout << "NO";
   return 0;
}