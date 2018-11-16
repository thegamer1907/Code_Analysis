	#include <iostream>
	#include <vector>
	#include <map>
	#include <algorithm>
	#include <string>
	#include <set>
	#include <map>
	#include <queue>
	#include <stack>
	#include <fstream>
	#include <iomanip>
	#include <tuple>
	#include <cstdlib>
	#include <time.h>
	#include <random>
	#define ll long long
	#define fori(i, N, M) for(int i = N; i<M; i++)
	//#define inputf(s) ifstream cin(s);
	//#define outputf(s) ofstream cout(s);
	#define forid(i,M, N) for(int i = M - 1; i>=N; i--)
	const int N = (int)1e5+1, INF = (int)1e9;
	const float PI = 3.14159265359, EPS = 1e-6;
	using namespace std;
	string to_base(int n, int p) {
		int r;
		string s;
		while (n) {
			r = n % p;
			n /= p;
			s += (r + '0');
		}
		reverse(s.begin(), s.end());
		while (s.size() < 2)
			s.insert(s.begin(), '0');
		return s;
	}
	string s;
	int n, t;
	int main() {
		/*ifstream cin("input.txt");
		ofstream cout("output.txt");*/
		cin >> n >> t >> s;
		int i = 0;
		fori(j, 0, t) {
			while (i < s.size()) {
				if (s[i] == 'B'&&s[i + 1] == 'G') {
					swap(s[i], s[i + 1]);
					i += 2;
				}
				else i++;
			}
			i = 0;
		}
		cout << s;
		return 0;
	}