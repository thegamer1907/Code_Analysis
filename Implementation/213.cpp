
#include <iostream>
#include<algorithm>
#include<cmath>
#include<vector>

using namespace std;

int main()
{
   int n, a, b;
   cin >> n >> a >> b;
   if(a > b)
    swap(a,b);
   a--; b--;
   int ans = 1;

   while(n != 2){
     a /= 2;
     b /= 2;
     n /= 2;
     if(a == b){
        cout << ans;
        return 0;
     }
     ans++;
   }
   cout << "Final!";
    return 0;
}
