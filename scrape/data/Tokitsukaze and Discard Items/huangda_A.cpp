#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int,int>
#define rep(i,a,b) for(int i=(a);i<=(b);i++)
#define drep(i,a,b) for(int i=(a); i>=(b);i--) 

const int maxn = 1e5 + 5;
const int MOD = 1e9 + 7;

ll n,m,k;
ll p[maxn];

int main()
{
   ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
   cin >> n >> m >> k;
   rep(i,1,m) cin >> p[i],p[i]--;
   int i = 1;
   ll t = 0, ans = 0;
   while(i <= m){
        ll cur = 1;
        while (i < m && (((p[i] - t) / k) == ((p[i+1] - t) / k))) {
          //cout << i << endl;
          i++,cur++;
        }
        t += cur; i++;
        //cout << t << endl;
        ans++;
   }
   cout << ans << endl;
   return 0;
}