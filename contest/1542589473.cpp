// Bark to Unlock
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

bool Solve(vector<char> & first, vector<char> & second, char passA, char passB) {
  for(int i = 0; i < first.size(); ++i) {
    for(int j = 0; j < second.size(); ++j) {
      if(i == j && first[i] == passA && second[j] == passB) return true;
      if(first[i] == passB && second[j] == passA) return true;
    }
  }

  return false;
}

int main() {

  char passA,passB;
  int n;
  cin >> passA >> passB >> n;
  vector<char> first(n);
  vector<char> second(n);
  for(int i = 0; i < n; ++i) cin >> first[i] >> second[i];

  if(Solve(first, second, passA, passB)) cout << "YES" << '\n';
  else cout << "NO" << '\n';

  return 0;
}
