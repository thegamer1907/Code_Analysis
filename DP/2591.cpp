//IF NOT NOW , WHEN?!!
#include <math.h>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <map>
#include <queue>
#include <stack>
#include <cstring>

#define F first
#define S second
#define mp make_pair
#define pii pair<int , int>

using namespace std;
typedef long long ll;

const int N = 4e5 + 5 , L = 26 , MOD = 1e9 + 7 , P = 727 , SQ = sqrt(N) , M = 2e5 + 10;
const ll inf = 3e18 + 10;

int dp[N] , a[N] , n , ans = 0;

int main(){
      scanf("%d" , &n);
      for(int i = 1 ; i <= n ; i++){
            scanf("%d" , &a[i]);
            if(a[i] > a[i-1])
                  dp[i] = dp[i-1] + 1;
            else
                  dp[i] = 1;
            ans = max(ans , dp[i]);
      }
      printf("%d" , ans);
      return 0;
}
