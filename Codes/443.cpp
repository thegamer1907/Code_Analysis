#include <iostream>
#include <cctype>
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <cassert>
#include <iomanip>
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <fstream>


#define c0 ios_base :: sync_with_stdio(0); cin.tie (0);
#define ll long long
#define ull unsigned long long
#define ff first
#define ss second
#define sz(a) int(a.size())

#define FNAME ""

#define mp make_pair
#define pb push_back

#define pii pair < int, int >
#define pll pair < ll, ll >

using namespace std;

const int N = 1e5 + 17;
const int INF = 1e9 + 7;
const int MOD = 1e8 + 7;
const double eps = 1e-9;
const double pi = 3.14159265359;


int f(int x){
	int res = 0;
	while(x) res += x%10, x /= 10;
	return res;
}
int ans = 0;

int main() {
	c0
	int k;
	cin >> k;
	while(k){
		ans++;
		if(f(ans) == 10) k--;
	}
	cout << ans;
    return 0;
}
