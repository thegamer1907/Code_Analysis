#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pll pair<ll,ll>
#define PB push_back
#define MP make_pair
#define N 11000001

int dp[N];

int main(){
  int n;

  cin >> n;

  for(int i = 1; i < N; ++i){
    dp[i] = i % 10 + dp[(i / 10)];
    if(dp[i] == 10)
      --n;
    if(n == 0){
      cout << i << '\n';
      break;
    }
  }

  return 0;
}
