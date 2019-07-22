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
  int ans = 0;
  // int i = k, tot = 1, dels = 0;
  // while (tot <= n) {
  //   if (a[tot] == 1) {
  //     dels++;
  //   }
  //   if (i == 1 or tot == n) {
  //     debug(tot, dels);
  //     if (dels == 0) {
  //       i = k+1;
  //     } else {
  //       ans++;
  //       i = dels+1;
  //       dels = 0;
  //     }
  //   }
  //   i--;
  //   tot++;
  // }

  // ans++;
  // int flag = 0, dels = ((*mp.begin()).S).size();
  // int i = dels, diff = dels;
  // dels = 0;
  // debug(diff, i, ans);
  // int power = (a[i-1]-1)/k;
  // while (i < m) {
  //   int rem = (a[i]-1)%k;
  //   // rem += diff;
  //   // rem %= k;
  //   debug(power, (a[i]-diff)/k, a[i], diff, rem);
  //   if (rem <= diff /* and (a[i]-diff)/k == power or ((a[i]-diff+1)/k == power) and (a[i]-diff)%k == 0 */) {
  //     dels++;
  //     i++;
  //   } /* else if ((a[i]-diff)/k == power) {
  //     dels++;
  //     i++;
  //   } */ else {
  //     debug(dels, diff, a[i]);
  //     if (dels == 0) {
  //       diff = k;
  //       // diff = k;
  //     } else {
  //       diff += dels;
  //       diff %= k;
  //       dels = 0;
  //       ans++;
  //     }
  //     power = (a[i]-1)/k;
  //   }
  // }
  // if (dels != 0) {
  //   ans++;
  // }





int page = 1;
int rem = 0;
ans = 0;
while (rem < m and page <= n/k + (n%k != 0)) {
	// int ind = bisect.bisect_right(p,(page*k)+rem,0,m);
  int ind = upper_bound(all(a), (page*k)+rem) - a.begin();
	if (ind == rem and a[ind] != (page*k)+rem) {
		page+=1;
  }
	else {
		rem = ind;
		ans+=1;
  }
	// # print page,rem,ans

}
// P(ans)



  cout << ans;

  return 0;
}