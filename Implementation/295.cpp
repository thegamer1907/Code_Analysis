#include <bits/stdc++.h>

#define ll long long
#define pb push_back

#define f first
#define s second

using namespace std;

const int N = 1e5 + 10;

int n, a, b;

int mx = 0;

int main() {
 cin >> n >> a >> b;
 for (int i = 0; i < log2(n); i++) {
  int x = (a + (1 << i) - 1) / (1 << i);
  int y = (b + (1 << i) - 1) / (1 << i);
  if (x == y) {
   cout << i;
   return 0;
  }
 }
 cout << "Final!";
 return 0;
}
