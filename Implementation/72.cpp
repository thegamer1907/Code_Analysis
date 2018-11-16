#include <iostream> 
#include <fstream>
#include <vector>
#include <map>
#include <deque>
#include <set>
#include <cmath>
#include <fstream>
#include <string>
#include <algorithm>
#include <iomanip>
typedef long long ll;
typedef long double ld;
const int N = int(1e6) + 7;
const ll INF = ll(1e18) + 111;
const ld EPS = 1e-7;
#define pb push_back
#define all(v) v.begin(), v.end()
#define sz(v) v.size()
#define x first
#define y second 
using namespace std;
template<typename T> inline istream &operator >> (istream &in, vector<T> &v) { for (auto &i : v) { in >> i; } return in; }
template<typename T> inline ostream &operator<< (ostream &out, const vector<T> &v) { for (auto &it : v) { out << it << " "; } return out; }


int main() {
	//ifstream cin("input.txt");
	ios::sync_with_stdio(0);	
	cin.tie(0);
	int n, a, b;
	int ans = 0;
	int v[9] = { 1,2,4,8,16,32,64,128,256 };
	cin >> n >> a >> b;
	while (a != b) {
		a = (a + 1) / 2;
		b = (b + 1) / 2;
		ans++;
	}
	cout << (v[ans] == n ? "Final!" : to_string(ans));
	return 0;
}