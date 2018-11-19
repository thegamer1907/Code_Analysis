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

int main()
{
#ifdef _DEBUG
	freopen("ReadMe.txt", "r", stdin);
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
	
	string s;
	cin >> s;
	

	int n;
	cin >> n;

	bool wasFirst = false;
	bool wasSecond = false;

	for (int i = 0; i < n; ++i)
	{
		string k;
		cin >> k;

		if (k == s)
		{
			wasFirst = true;
			wasSecond = true;
		}

		if (k[0] == s[1]) wasSecond = true;
		if (k[1] == s[0]) wasFirst = true;

	}



	cout << (wasFirst & wasSecond ? "YES" : "NO") << endl;

	return 0;

}