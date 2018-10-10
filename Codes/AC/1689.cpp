#include <bits/stdc++.h>

using namespace std;

long long n, m, k;

int main() {
      cin >> n >> m >> k;

      long long l = 0;
      long long r = n * m + 1;
      
      while (r - l > 1) {
            long long mid = (l + r) >> 1;

            long long sum = 0;

            for (int i = 0; i < n; ++i)
                  sum += min((mid - 1) / (i + 1), m);

            if (sum < k)
                  l = mid;
            else
                  r = mid;

      }

      cout << l << '\n';

      return 0;
}