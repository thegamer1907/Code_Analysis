#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include<stack>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<sstream>
#include<cmath>
#include<iterator>
#include<unordered_map>
using namespace std;
#define _for(i,a,b) for(int i=(a);i<(b);++i)
typedef long long ll;	
const int maxn = 100000+2;

int getk(int n) {
	int x = 2, ans = 1;
	while (x != n) {
		x <<= 1; ans++;
	}
	return ans;
}
int main()
{
	int n, a, b;
	while (cin >> n >> a >> b) {
		int mk = getk(n);

		int L = 1, R = n;

		int cnt = 0;
		while (a<=R&&a>=L&&b<=R&&b>=L) {
			cnt++;
			int m = (R + L) >> 1;
			if (a <= m) {
				R = m;
			}
			else {
				L = m + 1;
			}
		}

		if (cnt == 1) {
			cout << "Final!" << endl;
		}
		else {
			cout << mk - cnt + 1 << endl;
		}
	}

	return 0;
}