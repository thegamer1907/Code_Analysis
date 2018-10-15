#include <bits/stdc++.h>

using namespace std;

const int MAXN = 112;
int a[MAXN];
int n, m;

int main() {
   ios::sync_with_stdio(false);

   cin >> n >> m;
   int sum = 0;
   int max_a = 0;
   for (int i = 0; i < n; i++) {
      cin >> a[i];
      max_a = max(max_a, a[i]);
      sum += a[i];
   }

   int ub = max_a + m;

   int lb = max_a;
   int slack = max_a * n - sum;
   if (m > slack) {
      lb += (m - slack + n - 1) / n;
   }

   cout << lb << ' ' << ub << endl;

}
