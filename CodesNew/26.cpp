#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;
int main()
{
   int n , l , a[1000];
   cin >> n >> l;
   for(int i = 0 ; i < n ; i++)scanf("%d" , a+i);
   sort(a , a+n);
   int d = 0;
   for(int i = 1 ; i < n ; i++)
      d = max(a[i]-a[i-1] , d);
   d = max(a[0]*2 , d) , d = max((l-a[n-1])*2 , d);
   cout << fixed << setprecision(9) << d/2.0;
   return 0;
}