#include<iostream>
#include<vector>

#define ll long long
#define mod 1000000007ll
#define maxn 100005
#define pb push_back
#define mp make_pair

using namespace std;

int min(int a, int b) {
	return a > b ? b : a;
}

int max(int a, int b) {
	return a < b ? b : a;
}

int n;
int a[maxn];

int main() {
	//freopen("input.txt", "r", stdin);

  cin >> n;

  for (int i = 0 ; i < n; i++) {
    cin >> a[i];
  }

  ll l = 0ll, r = 100000000000ll;
  ll ans = 0ll;

  while (l <= r) {
    ll m = (l + r) / 2ll;
    ll temp = 0ll;
    bool flag = true;
    for (int i = 0; i < n; i++) {
      temp+=m-a[i];
      if (m-a[i] < 0) {
        flag = false;
      }
    }

    if (temp >= m && flag) {
      ans = m;
      r = m - 1;
    } else {
      l = m + 1;
    }
  }

  cout << ans << endl;

  return 0;
}
