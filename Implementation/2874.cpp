#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <iomanip>
#include <deque>
#include <list>
#include <cassert>
#include <complex>
#include <bitset>

using namespace std;
typedef complex<double> base;
typedef long long ll;
typedef int INT;
#define int ll
//#define ll __int128
typedef long double ld;
typedef vector<int> vi;
typedef pair <int, int> pii;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
#define mmin(a, b) a = min(a, (b))
#define mmax(a, b) a = max(a, (b))
#define ALL(a) a.begin(),a.end()
#define SZ(a) ((int)(a).size())
#define watch(x) cout << (#x) << " = " << (x) << endl;


signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string s;
	getline(cin, s);

	vi v(26);

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			v[s[i] - 'a'] = 1;
	}

	int sum = 0;
	for (int i = 0; i < 26; i++)
		sum += v[i];

	cout << sum;

	



}
//FUCK C++++++++++++++++++++