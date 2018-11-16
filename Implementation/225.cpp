#include <bits/stdc++.h>

using namespace std;

#define fi first
#define se second
#define re return
#define pb push_back

#define mp make_pair

#define F(i, a, b) for (int i = a; i < b; i++)
#define f(i, n) F(i, 0, n)

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;

int main() {
#ifdef home
  freopen("i.txt", "r", stdin);
#endif // home
  int n;
  cin >> n;
  int a, b;
  cin >> a >> b;
  int cnt = 0;
  --a; --b;
  while (n > 1) {
    cnt++;
    n /= 2;
  }
  int st = 0;
  while (a != b) {
    a /= 2;
    b /= 2;
    st++;
  }
  if (st == cnt) {
    cout << "Final!";
  } else {
    cout << st;
  }
}
