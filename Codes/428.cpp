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

int getsum(int x) {
	int v=0;
	while(x>0) { v += x%10; x/=10; }
	return v;
}

int main(void) {
	int k, i;
	cin >> k;
	for(i=1;k>0;i++) if(getsum(i) == 10) --k;
	cout << i-1 << endl;
  return 0;
}
