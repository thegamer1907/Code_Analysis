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
	make2(int, n, k);
	set<string> arr1;
	FOR(n) {
		string a;
		cin >>  a;
		arr1.insert(a);
	}
	set<string> arr2;
	FOR(k) {
		string a;
		cin >> a;
		arr2.insert(a);
	}
	set<string> arr3;
	set_intersection(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), inserter(arr3, arr3.begin()));
	cout << ((arr1.size() != arr2.size()) ? ((arr1.size() > arr2.size()) ? ("YES") : ("NO")) : ((arr3.size() % 2 == 0) ? ("NO") : ("YES")));
}


integer main(integer argc, char *argv[]) {
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