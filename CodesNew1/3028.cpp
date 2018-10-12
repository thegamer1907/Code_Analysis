#include<bits/stdc++.h>
#include<string>
#include<map>
#define ll          long long
#define pb          push_back
#define mp          make_pair
#define pii         pair<int,int>
#define pll         pair<ll,ll>
#define vii         vector<pair<ll,ll> >
#define vi          vector<int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (int)x.size()
#define hell        1000000007
#define endl        '\n'
#define rep(i,a,b)  for(ll i=a;i<b;i++)
#define rep1(i,a,b) for(ll i=a;i<= b;i++)
#define PI          3.14159
#define MAX         100000002
#define fast_io      ios_base::sync_with_stdio(false);  cin.tie(0); cout.tie(0);
const int base = 1000000000;
const int base_digits = 9;
using namespace std;
ll sum[1000001];
ll cnt[1000001];
int main()
{
  fast_io
  ll k;
  string s1;
  cin >> k >> s1;
  cnt[0] = 1;
  sum[0] = s1[0] - '0';
  for(ll i = 1; i < s1.size(); i++)
  {
    sum[i] = sum[i - 1] + (s1[i] - '0');
  }
  rep(i,0,s1.size())
  {
    cnt[sum[i]]++;
  }
  ll ans = 0;
  for(ll i = k; i <= sum[s1.size() - 1]; i++)
  {
    if(k == 0)
    {
      ans += (cnt[i]*(cnt[i] - 1))/2;
    }
    else
    {
      ans += cnt[i] *cnt[i - k];
    }
  }
  cout << ans << endl;
}