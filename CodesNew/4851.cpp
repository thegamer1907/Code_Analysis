#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <string>
#include <cstring>
// DON'T DIVIDE
// Try different approaches
using namespace std;

string t, p;
const int MAXN = 200005;
int a[MAXN];

int main()
{
	ios::sync_with_stdio(0);
	cin >> t >> p;

	for(int i = 1; i <= t.size(); i++)
	{
		int x;
		cin >> x;
		a[x - 1] = i;
	}


	int low = 0, high = t.size() - p.size();
	while(low < high)
	{
		int mid = (low + high + 1) / 2;
		int idx = 0;
		bool done = false;
		for(int i = 0; i < t.size(); i++)
		{
			if(t[i] == p[idx] && a[i] > mid)
				idx++;
			if(idx == p.size())
			{
				done = true;
				break;
			}
		}
		if(done)
			low = mid;
		else
			high = mid - 1;
	}

	cout << low << "\n";
	return 0;
}