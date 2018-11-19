// Template version 1.1.
// 2017.9.25
#include<bits/stdc++.h>
#define PB push_back
#define EPB emplace_back
#define F first
#define S second
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
int n, k;
int pros[100010];
bool ans = false, tmp;
int pos;
bool forFour[16];

int main() {
  cin >> n >> k;
  for(int i = 0; i < n; ++i)
    pros[i] = 0;
  for(int i = 0; i < n; ++i)
    for(int j = 0; j < k; ++j) {
      cin >> tmp;
      pros[i] += ((int)tmp) << j;
    }

  sort(pros, pros + n);

  for(int i = 0; i < n; ++i) {
    if (pros[i] == 0) {
      ans = true;
      goto END;
    }
  }

  pos = -1;
  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < k; ++j) {
      if ((pros[i] | (1 << j)) == (1 << j)) {
        pos = j;
        break;
      }
    }
    if (pos != -1)
      break;
  }

  if (pos != -1) {
    for(int i = 0; i < n; ++i) {
      if ((pros[i] & (1 << pos)) == 0) {
        ans = true;
        goto END;
      }
    }
  }

  if (k == 4) {
    for(int i = 0; i < 16; ++i)
      forFour[i] = false;
    for(int i = 0; i < 16; ++i)
      for(int j = 0; j < n; ++j)
        if (pros[j] == i)
          forFour[i] = true;
    if ((forFour[3] && forFour[12]) ||
        (forFour[5] && forFour[10]) ||
        (forFour[6] && forFour[9])) {
      ans = true;
      goto END;
    }
  }

  // cout << "content : " << endl;
  // for(int i = 0; i < n; ++i)
    // cout << pros[i] << ' ';
  // cout << endl;

END:
  if (ans)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}
