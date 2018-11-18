#include <bits/stdc++.h>
using namespace std;

#define FORu(i, start, n) for (ll i = start; i < (ll)(n); i++)
#define FORd(i, start, n) for (ll i = start; i > (ll)(n); i--)

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> P;

ll gcd(ll a, ll b) { //greatest common divisor
  if(b == 0)  return a;
  return gcd(b, a%b);
}
ll nCr(ll n, ll r) { // combinations
  ll C[r+1]; memset(C, 0, sizeof(C)); C[0] = 1;
  FORu(i,1,n+1){ 
    FORd(j,min(i,r),0){
      C[j] = C[j] + C[j-1];
    }
  }
  return C[r];
}
bool isPrime(ll n) {//check if prime
  if(n<=1) return false;
  if(n==2) return true;
  if(n%2==0) return false;
  ll m = sqrt(n);
  for (ll i=3; i<=m; i+=2) {
    if (n%i==0){
      return false;
    }
  }
  return true;
}

//==============================================================================

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    //from codeforces
    int h,m,s,t1,t2; cin >> h >> m >> s >> t1 >> t2;
    int res = 0;
    if ( h == 12 ) h = 0;
    if ( t1 == 12 ) t1 = 0;
    if ( t2 == 12 ) t2 = 0;
    m /= 5;
    s /= 5;

    if (t1 > t2) swap(t1,t2);

    if (t1 <= h && h < t2) res++;
    if (t1 <= m && m < t2) res++;
    if (t1 <= s && s < t2) res++;

    if (res == 0 || res == 3) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}