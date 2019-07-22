#include <bits/stdc++.h>
 
using namespace std;
const int maxn = 2e5 + 5;
 
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  long long n, m, k;
  cin >> n >> m >> k;
  vector <long long> p(m);
  for (int i = 0; i < m; i++){
    cin >> p[i];
    --p[i];
  }
  sort (p.begin(), p.end());
  int answ = 0;
  long long mm = 0;
  vector <long long>::iterator itt;
  bool ok = false;
  while(true)
  {
    long long x = p[mm];

    x -= mm;
    long long y = x % k;
    long long l = k - y;

    x += mm;

    itt = upper_bound(p.begin(), p.end(), x + l - 1);
    int idx = itt - p.begin();
    --idx;
    long long c = idx - mm + 1;
    mm += c;
    answ++;
    if (mm == m)break;
  }
  cout << answ << endl;
  return 0;
}