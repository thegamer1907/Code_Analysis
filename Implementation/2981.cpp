#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <string>
#include <cstring>
#include <map>
// DON'T DIVIDE
// Try different approaches
using namespace std;

int n;
map<string, int> m;

int main()
{
	ios::sync_with_stdio(0);
	cin >> n;

	m["Tetrahedron"] = 4;
	m["Cube"] = 6;
	m["Octahedron"] = 8;
	m["Dodecahedron"] = 12;
	m["Icosahedron"] = 20;

	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		sum += m[s];
	}	

	cout << sum << "\n";

	return 0;
}