#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <iomanip>
#include <set>
#include <map>
#include <stack>
#include <ctime>
#include <queue>

using namespace std;

	ifstream in("input.txt");
ofstream out("output.txt");



int main()
{
	long long n, m;
	cin >> n >> m;
	vector <string> a(n);
	vector <string> b(m);
	map<string, long long> M1;
	map<string, long long> M2;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		M1[a[i]]++;
	}
	for (int i = 0; i < m; ++i)
	{
		cin >> b[i];
		M2[b[i]]++;
	}
	vector <string> t;
	vector <string> tmp;
	for (int i = 0; i < n; ++i)
	{
		if (M1[a[i]] == M2[a[i]]) {
			t.push_back(a[i]);
			M2[a[i]] = 0;
		}
		else
			tmp.push_back(a[i]);
	}
	a = tmp;
	tmp.resize(0);
	for (int i = 0; i < m; ++i) {
		if (M2[b[i]] != 0)
			tmp.push_back(b[i]);
	}
	b = tmp;
	long long f = 0;
	long long s = 0;
	if (t.size() % 2 == 0)
	{
		f += t.size() / 2;
		s += t.size() / 2;
	}
	else {
		f += t.size() / 2 + 1;
		s += t.size() / 2;
	}
	f += a.size();
	s += b.size();
	if (f > s)
		cout << "YES";
	else
		cout << "NO";

		/*char T;
	cin >> T;
	if (T == 'r')
		main();
		*/
	//system("pause");
	return 0;
}