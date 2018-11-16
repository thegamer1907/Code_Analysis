#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<vector>
#include<string>
#include<iostream>
#include<algorithm>
#include<map>
#include<iterator>
#include<set>
#include<stack>
#include<queue>
#include<fstream>
#include<iomanip>
#include <unordered_map>
#include <unordered_set>
#include <numeric>
#include<cmath>
#include<list>
#include <sstream>
#include <stdio.h>
#include <string.h>
using namespace std;

#define FOR(i,a,b) for(int i = (a); i < (b); i++)
#define RFOR(i,b,a) for(int i = (b) - 1; i >= (a); i--)
#define ITER(it,a) for(__typeof(a.begin()) it = a.begin(); it != a.end(); it++)
#define FILL(a,value) memset(a, value, sizeof(a))

#define SZ(a) (int)a.size()
#define ALL(a) a.begin(),a.end()
#define PB push_back
#define MP make_pair

typedef long long LL;
typedef vector<int> VI;
typedef pair<int, int> PII;

const double PI = acos(-1.0);
const int INF = 1000 * 1000 * 1000 + 7;
const LL LINF = INF * (LL)INF;


int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, m;
	cin >> n >> m;
	VI arr(n);
	FOR(i, 0, n) {
		cin >> arr[i];
	}
	VI suff(n);
	suff[n - 1] = 1;
	set<int> s;
	s.insert(arr[n - 1]);
	RFOR(i, n-1, 0) {
		if (s.find(arr[i]) == s.end()) {
			s.insert(arr[i]);
			suff[i] = suff[i + 1] + 1;
		}
		else {
			suff[i] = suff[i + 1];
		}
	}
	FOR(i, 0, m) {
		int a;
		cin >> a;
		a--;
		cout << suff[a] << endl;
	}
	return 0;
}


