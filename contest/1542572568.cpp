#include <iostream>
#include <cmath>
#include <algorithm>
#include <utility>
#include <string>
#include <vector>
#include <set>
#include <math.h>
#include <map>
#include <iomanip>
#include <functional>
#include <list>
#include <random>
#include <queue>
#include <stdio.h>
#include <regex>
#include <bitset>
#include <numeric>
#include <bitset>
#include <assert.h>
#include <conio.h>
#include <sstream>
#include <fstream>
#include <cstring>
#include <array>
#include <unordered_map>
#include <unordered_set>
#include <stack>

using namespace std;

#define all(cd) (cd).begin(), (cd).end()
#define sqr(cd) ((cd) * (cd))

#define y0 sdkfaslhagaklsldk
#define y1 aasdfasdfasdf
#define yn askfhwqriuperikldjk
#define j1 assdgsdgasghsf
#define tm sdfjahlfasfh
#define lr asgasgash
#define norm asdfasdgasdgsd
#define have adsgagshdshfhds
#define ends asdgahhfdsfshdshfd

template <typename T> void alert(const T& t) { cout << t << endl; exit(0); }

typedef long long int64;
typedef unsigned long long uint64;
typedef array<int64, 2> hv;


int Stable(int n)
{
	if (n == 13) return 1;
	if (n == 0) return 12;
	return n;
}

int main()
{
#ifdef _DEBUG
	freopen("in.txt", "r", stdin);
	//freopen("123.txt", "w", stdout);
	//test();
#else
	{

		//freopen("input.txt", "r", stdin);
		//freopen("output.txt", "w", stdout);
	}
#endif
	//srand(time(NULL));
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int64 h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;

	h %= 12;
	t1 %= 12;
	t2 %= 12;

	int64 XD = 0;

	if (t1 > t2) swap(t1, t2);

	if (t1 <= h && h < t2) XD++;
	if (t1 <= m / 5 && m / 5 < t2) XD++;
	if (t1 <= s / 5 && s / 5 < t2) XD++;

	bool ans = (XD == 0 || XD == 3);


	cout << (ans ? "YES" : "NO") << endl;

	return 0;

}