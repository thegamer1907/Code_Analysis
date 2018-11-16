// by tmt514
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>
#define SZ(x) ((int)(x).size())
#define FOR(it, c) for(__typeof((c).begin()) it = (c).begin(); it != (c).end(); ++it)
using namespace std;
typedef long long LL;

int main(void) {
	int A, B;
	cin >> A >> B;
	A = min(A, B);
	LL ret = 1;
	for(int i=1;i<=A;i++) ret *= i;
	cout << ret << endl;
  return 0;
}
