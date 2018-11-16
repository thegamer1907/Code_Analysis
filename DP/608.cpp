#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
typedef long long int ll;

int main(){
  vector <int> dp;
  string a; cin >> a;
  dp.pb(0);
  for(int i=1;i<a.size();i++){
    dp.pb(dp[i-1]+(a[i]==a[i-1]));
  }
  int n, l, r;
  scanf("%d", &n);
  while(n--){
    scanf("%d %d", &l, &r);
    printf("%d\n", dp[r-1]-dp[l-1]);
  }
}