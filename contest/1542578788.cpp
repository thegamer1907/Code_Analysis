// Qualification Rounds
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <sstream>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <bitset>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <deque>
#include <utility>

#define PI 3.1415926535897932384
#define EPS 10e-9
#define LL long long int
#define ULL unsigned long long int
#define PII pair<int,int>

using namespace std;

bool Solve(int n, int k, vector<int> & problems) {

  // Check if there is a problem this combination of teams knows
  for(int i = 0; i < 1 << k; ++i) {
    bool typeFound = false;
    bool contFound = false;
    for(int j = 0; j < problems.size(); j++) {
      typeFound = typeFound || problems[j] == i;
      contFound = contFound || ((i & problems[j]) == 0);
      //cout << i << ' ' << problems[j] << ' ' << j << '\n';
    }

    if(typeFound && contFound) return true;
  }

  return false;
}

int main() {

  int n, k;
  cin >> n >> k;
  vector<int> problems(n,0);
  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < k; ++j) {
      int at;
      cin >> at;
      problems[i] |= (at << j);
    }
  }

  if(Solve(n,k,problems)) cout << "YES" << '\n';
  else cout << "NO" << '\n';

  return 0;
}