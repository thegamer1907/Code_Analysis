
#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>
#include <queue>
#include <string>
#include <algorithm>
#include <cctype>
#include <map>

#include <iomanip>



using namespace std;


int main()
{
	int n, t;
	cin >> n >> t;
	vector<int> lineWorld;
	for (int i = 0; i < n-1; i++)
	{
		int t;
		cin >> t;
		lineWorld.push_back(t);
	}
	int currentcellnr = 1;
	int idx = 0;
	while (currentcellnr < t)
	{
		currentcellnr += lineWorld[idx];
		idx += lineWorld[idx];
	}
	if (currentcellnr == t)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}
