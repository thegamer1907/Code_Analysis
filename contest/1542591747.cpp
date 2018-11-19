#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <sstream>
#include <iomanip>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

#define mp make_pair
#define pb push_back
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<vi> vvi;
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;



int main() {
  //freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
  ios_base::sync_with_stdio(false); cin.tie(0);


  string p;
  cin >> p;
  int n;
  cin >> n;

  string a[n];

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      string r = a[i] + a[j];
      if (r.find(p) != string::npos) {
        cout << "YES";
        return 0;
      }
    }
  }

  cout << "NO";

  return 0;
}
