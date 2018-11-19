#include <string>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>
#include <math.h>
#include <functional>
#include <unordered_map>
#include <map>

using namespace std;

typedef long long ll;

int a[30];

int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int n, k;
	cin >> n >> k;
	bool f = false;
	for (int i = 0; i < n; i++)
	{
		int s = 0;
		for (int i = 0; i < k; i++)
		{
			int t;
			cin >> t;
			s = s * 2 + t;
		}
		a[s]++;
	}
	for (int i = 0; i < (1 << k); i++)
	    for (int j = 0; j < (1 << k); j++)
		    if (a[i] && a[j] && (i & j) == 0)
		    	f = true;
	if (f)
		cout << "yes";
	else
		cout << "no";
	return 0;
}