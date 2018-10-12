/*
 * In The Name Of ALLAH
 * created by Harolinch
 * NOTES:
 */
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>

#include <algorithm>
#include <list>
#include <vector>
#include <stack>
#include <deque>
#include <queue>
#include <set>
#include <map>
#include <bitset>
#include <numeric>

#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <memory.h>
#include <ctype.h>
#include <string.h>
using namespace std;


typedef vector<int> veci;


#define rep(i, a, n)	for(int i = a; i<=n; i++)


class Solution {
public:

	void solve(std::istream& in, std::ostream& out) {
		int n, t;
		in >> n >> t;
		
		veci v(n);
		rep(i, 0, n - 1)
			in >> v[i];
		int l = 0, r = 0;
		while (v[r] > t) r++;
		l = r;
		int mxcnt = 0;
		int sum = 0;
		int cnt = 0;
		while (r < n && sum <= t) {
			sum += v[r];
			cnt++;
			if (sum > t) {
				while ( sum > t && l <= r) {
					sum -= v[l];
					cnt--;
					l++;
				}
			}
			mxcnt = max(mxcnt, cnt);
			r++;
		}
		out << mxcnt << endl;
	}
};

void solve(std::istream& in, std::ostream& out)
{
    out << fixed << std::setprecision(5);
    Solution solution;
    solution.solve(in, out);
}


int main() {
    
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    istream& in = cin;


    ostream& out = cout;

    solve(in, out);
    return 0;
}


