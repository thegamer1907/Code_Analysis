#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n, m;
	cin >> n;
	vector <int> b(n);
	for(int i = 0; i < n; i++)
		cin >> b[i];
	cin >> m;
	vector <int> g(m);
	for(int i = 0; i < m; i++)
		cin >> g[i];
	int pairs = 0;
	sort(b.begin(), b.end());
	sort(g.begin(), g.end());
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			if(abs(b[i] - g[j]) <= 1)
			{
				pairs++; 
				g[j] = 1000;
				b[i] = 0;
				break;
			}
	cout << pairs << endl;
}