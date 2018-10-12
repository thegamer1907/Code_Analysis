#include <iostream>
#include <vector>
#include <cmath>
#include <ctime>
#include <cassert>
#include <cstdio>
#include <queue>
#include <set>
#include <map>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <algorithm>
#include <numeric>

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define fore(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)

using namespace std;


int main()
{
  int n, m;
  cin >> n >> m;

  int a[n+1];

  forn(i, n)
    cin >> a[i];

  int ans2 = *max_element(a, a+n) + m;


  forn(i, m)
  {
    sort(a, a+n);
    a[0]++;
  }

  int ans1 = *max_element(a, a+n);

  cout << ans1 << " " << ans2 << endl;

}
