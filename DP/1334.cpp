//Me And My Broken Heart ! :)
//Wrote By Arian_Az in 2018/2/28 (wrong) - over write in 2018/8/21 !
#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e2 + 7;
int n , a[maxn] , o[maxn] , z[maxn] , res, co, cz;
int main(){
  cin >> n;
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
    o[i] = o[i-1] + (a[i] == 1), co += (a[i] == 1);
    z[i] = z[i-1] + (a[i] == 0), cz += 1 - (a[i] == 1);
  }

  for(int i = 1; i <= n; i++)
    for(int j = i; j <= n; j++)
       if(z[j] - z[i-1] > o[j] - o[i-1])
	 res = max(res, z[j] - z[i-1] + o[i] + o[n] - o[j-1]);

  if(res == 0 && n > 1)
    cout << n-1 << endl;
  else if(res == 0 && n == 1)
    cout << 0 << endl;
  else
    cout << res << endl;
  
  return 0;
}
