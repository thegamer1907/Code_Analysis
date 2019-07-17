// aarsh01rsh@gmail.com
// Aarsh Sharma
#include<bits/stdc++.h>
using namespace std;

string to_string(string s) {
  return '"' + s + '"';
}
string to_string(char ch) {
  string s(1, ch);
  return '\'' + s + '\'';
}
string to_string(const char *s) {
  return to_string((string)s);
}
string to_string(bool b) {
  return (b ? "true" : "false");
}
template <typename A, typename B>
string to_string(pair<A, B> p) {
return "(" + to_string(p.first) + ", " + to_string(p.second) + ")";
}
template <typename A>
string to_string(A v) {
  bool first = true;
  string res = "{";
  for (const auto &x : v) {
    if (!first) {
      res += ", ";
    }
    first = false;
    res += to_string(x);
  }
  res += "}";
  return res;
}
void debug_out() { cerr << endl; }
template <typename Head, typename... Tail>
void debug_out(Head H, Tail... T) {
  cerr << " " << to_string(H);
  debug_out(T...);
}

#ifndef ONLINE_JUDGE
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]:", debug_out(__VA_ARGS__)
#else
#define debug(...) 42
#endif

#define f(i, x, n) for (int i = x; i < n; i++)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define F first
#define S second
#define pb push_back
#define endl "\n"
#define unique(v) v.erase(unique(v.begin(), v.end()), v.end());
#define fast_io() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

typedef long long int ll;
#define int ll
typedef pair<ll, ll> pll;
typedef vector<vector<ll>> matrix;
typedef vector<ll> vll;

const ll mod = 1e9 + 7;
const ll inf = LLONG_MAX;
const ll N = 1e5 + 10;

int32_t main() {
  fast_io();

  int n, m, k; cin >> n >> m >> k;
  map<int, vll> mp;
  vll a(m); f (i, 0, m) {
    cin >> a[i];
    if (a[i]%k == 0) {
      mp[a[i]/k - 1].pb(a[i]%k);
    } else {
      mp[a[i]/k].pb(a[i]%k);
    }
  }
  int ans = 1, i = ((*mp.begin()).S).size(), diff = ((*mp.begin()).S).size(), dels = 0;
  int power = (a[i-1] - diff - 1)/k;
  while (i < m) {
    if ((a[i] - diff - 1)/k == power) {
      dels++;
      i++;
    } else {
      if (dels != 0) {
        diff += dels;
        diff %= k;
        dels = 0;
        ans++;
      }
      power = (a[i]-diff-1)/k;
    }
  }
  if (dels != 0) {
    ans++;
  }
  cout << ans;

  return 0;
}