#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAX_N = 1;

int N;
string s, pw;
bool fi[26], se[26];

int main()
{
  cin >> pw >> N;
  for (int i = 0; i < N; ++i) {
    cin >> s;
    if (s == pw) {
      cout << "YES" << endl;
      return 0;
    }
    fi[s[1] - 'a'] = true;
    se[s[0] - 'a'] = true;
  }
  if (fi[pw[0] - 'a'] && se[pw[1] - 'a']) cout << "YES" << endl;
  else cout << "NO\n";
  return 0;
}
