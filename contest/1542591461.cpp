#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
#include <iomanip>
#include <map>
#include <queue>
#include <set>
using namespace std;
typedef long long int ll;
#define pb push_back
#define F first
#define S second
#define mkp make_pair
#define pow2(i) (1 << (i))
#define modi(a,b) ((a%b+b)%b)
#define uni(a,b) (((a+b)*(a+b+1)/2)+b)
const int MAXN=1e9+7;
ll int_pow(ll base, ll exp){
	ll result=1;
	while (exp){
		if (exp & 1)
		   result *= base;
		exp/=2;
		base*=base;
	}
	return result;
}
string a[101];
int main() {
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  string s;cin >> s;
  ll ans=0;
  ll n;cin >> n;
  for (ll i=0;i<n;i++){
    cin >> a[i];
    if (a[i] == s)ans=1;
  }
  if (ans){
      cout << "YES";
      return 0;
  }
  ans=0;
  for (ll i=0;i<n;i++){
      if (a[i][1] == s[0]){
        ans++;
        break;
      }
  }
  
  
  for (ll i=0;i<n;i++){
      if (a[i][0] == s[1]){
        ans++;
        break;
      }
  }
  
  if (ans == 2)cout << "YES";
  else cout << "NO";
  
}