#include <bits/stdc++.h>
using namespace std;
# define rep(i, n) for(int i = 0 ;i < (n); i++)
# define forup(i, a, b) for(int i = (a); i <= (b); i++)
# define rdarr(a, n) rep(i, n) cin>>a[i];
# define tcsolve() int tcs; cin>>tcs; forup(tc, 1, tcs) solve();
typedef long long ll;
const int N = 100001;
int n;
ll S;
int arr[N];
ll b[N];
ll res(int m)
{
   for(int i = 0; i  < n; i++)
        {
          b[i] = arr[i]  + (i+1) * (ll) m;
        }
    sort(b, b + n);
    ll ans = 0;
    for(int i = 0;  i  <  m; i++)
        ans += b[i];
    return ans;
}
int main()
{

  cin>>n;
  cin>>S;
  rep(i, n)
     cin>>arr[i];
int l = 0, r = n + 1;
while(l < r  - 1)
  {
      int m= (l + r)/2;
      if(res(m) <= S)
         l = m ;
      else
       r = m;
  }
  cout<<l<<" "<<res(l)<<endl;
}
