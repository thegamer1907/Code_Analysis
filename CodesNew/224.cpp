#include <iostream>
using namespace std;
int main()
{
   int n , m , a[100001] , cnt = 0 , maxx = 0; 
   long long sum = 0;
   cin >> n >> m;
   for(int i = 0 ; i < n; i++)cin >> a[i];
   for(int i = 0 ; i < n; i++){
      sum += a[i] , cnt++;
      if(sum > m)
         sum -= a[i- --cnt];
      maxx = max(maxx,cnt);
   }
   cout << maxx;
	return 0;
}