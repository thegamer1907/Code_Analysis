#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <set>
#include <vector>
#include <list>
#include <algorithm>
#include <regex>
#include <math.h>
#include <map>
#include <iterator>
#include <climits>
#include <numeric>
using namespace std;

typedef int integer;
#define int long long
#define make(type, x) type x; cin>>x
#define make2(type, x, y) type x, y; cin>>x>>y
#define make3(type, x, y, z) type x, y, z; cin>>x>>y>>z
#define make4(type, x, y, z, q) type x, y, z, q; cin>>x>>y>>z>>q
#define ALL(x) (x).begin(), (x).end()
#define FOR(b) for(int i = 0; i <(b); i++)




void Programme() {
	const int limit = 1e7 + 2;
	vector<int> arr(limit);
	make(int, n);
	FOR(n) {
		make(int, a);
		arr[a]++;
	};

	vector<int> simpl(limit, true);
	simpl[0] = simpl[1] = false;
	for (int i = 2; i < simpl.size(); ++i)
		if (simpl[i])
			if (i*i < simpl.size())
				for (int j = i*i; j < simpl.size(); j += i)
					simpl[j] = false;
	for (int i = 2; i < simpl.size(); ++i)
		if (simpl[i]) {
			simpl[i] = 0;
			for (int j = i; j < simpl.size(); j += i)
				simpl[i] += arr[j];
		}
	for (int i = 0; i < simpl.size() - 1; i++)
		simpl[i + 1] += simpl[i];
	make(int, m);
	FOR(m) {
		make2(int, l, r);
		if (r >= limit) r = 1e7;
		if (l >= limit) cout << 0 << endl;
		else cout << simpl[r] - simpl[l - 1] << endl;
	}
}




integer main(integer argc, char *argv[]) {
	ios_base::sync_with_stdio(0);
	if (argc > 1) {
		ofstream FileOutput("output.txt");
		ifstream FileInput("input.txt");
		cout.rdbuf(FileOutput.rdbuf());
		cin.rdbuf(FileInput.rdbuf());
		Programme();
		integer CoutStrInFile = 2;
		while (!cin.eof()) {
			char SpaceChar = 'a', PrevC = '`';
			while (!cin.eof()) {
				SpaceChar = cin.get();
				if ((SpaceChar == '\n') && (SpaceChar == PrevC)) break;
				PrevC = SpaceChar;
			}
			if (cin.eof()) return 0;
			FOR(CoutStrInFile + 1) cout << endl;
			Programme();
		}
		FileOutput.close();
		FileInput.close();
	}
	else {
		Programme();
	}
	return 0;
}