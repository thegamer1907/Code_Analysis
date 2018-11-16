#pragma GCC optimize ("Ofast")
#pragma GCC optimize ("unroll-loops")

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <string>
#include <iomanip>
#include <climits>
#include <queue>
#include <stack>
#include <cmath>

using namespace std;

#define LL long long
#define LD long double
#define forn(i, a, b) for(int i = a; i < b; i++)
#define downforn(i, a, b) for(int i = a; i > b; i--)
#define pb push_back
#define mp make_pair
const LL LLMAX = (1LL << 62) - 1; 

template <class T> 
ostream & operator << (ostream &out, vector<T> &a) {
	forn(i, 0, (int)a.size() - 1)
		out << a[i] << " ";
	if (a.size() > 0) out << a.back();
	out << endl;
	return out;
}
template <class T> 
istream & operator >> (istream & in, vector<T> &a) {
	forn(i, 0, (int)a.size())
		in >> a[i];
	return in;
}

signed main() {
	//freopen("input.txt", "r", stdin);
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int n, a, b;
	cin >> n >> a >> b;
	a--; b--;
	if (b < a)
		swap(a, b);
	vector<int> cur(n);
	forn(i, 0, n)
		cur[i] = i;

	int num = 1;
	while (cur.size() > 2) {
		vector<int> next;
		for (int i = 0; i < cur.size() - 1; i += 2) {
			if (cur[i] == a && cur[i + 1] == b) {
				cout << num << endl;
				return 0;
			}
			else if (cur[i] == a || cur[i + 1] == a)
				next.pb(a);
			else if (cur[i] == b || cur[i + 1] == b)
				next.pb(b);
			else 
				next.pb(cur[i]);
		}
		cur = next;
		num++;
	}

	if (cur[0] == a && cur[1] == b) {
		cout << "Final!" << endl;
	}
}
