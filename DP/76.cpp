#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int n, m, p = 0;
	vector < char > used(101, 0);
	cin >> n;
	vector < int > b(n);
	for (int h = 0; h < n; h++) cin >> b[h];
	cin >> m;
	vector < int > g(m);
	for (int h = 0; h < m; h++) cin >> g[h];
	sort(b.begin(), b.end());
	sort(g.begin(), g.end());
	
	for (int h = 0; h < n; h++)
	{
		for (int z = 0; z < m; z++)
	    {
	     	if (!used[z] && abs(b[h] - g[z]) < 2)
	     	{
	     		used[z] = 1;
	     		p++;
	     		break;
	     	}
	    }
	}
	cout << p;
}