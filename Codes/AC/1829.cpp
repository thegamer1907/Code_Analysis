#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<cstdio>
#include<cmath>
using namespace std;
typedef long long int lli;
int main(){
  ios::sync_with_stdio(false);
  lli n,m,k;
  cin >> n >> m >> k;
  lli l= 0, r = 250000000001;
  lli ans=0;
  while(l<=r){
    lli mid = (l+r)/2;
    // cout << mid << endl;
    lli temp = 0;
    for(lli i =1;i<=n;i++){
      temp+=min(m,(mid-1)/i);
    }
    if(temp<=k-1){
      ans = mid;
      l = mid+1;
    }
    else{
      r = mid-1;
    }
  }
  cout << ans << endl;
  return 0;
}
