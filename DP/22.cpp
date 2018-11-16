#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n, m, t, c = 0;
	cin >> n;
	vector<int> a;
	for(int i = 0; i < n; i++)
	{
		cin >> t;
		a.push_back(t);
	}
	cin >> m;
	vector<int> b;
	for(int i = 0; i < m; i++)
	{
		cin >> t;
		b.push_back(t);
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(abs(a[i] - b[j]) <= 1)
			{
				c++;
				b[j] = 1000;
				break;
			}
		}
	}
	cout << c;
}
