#include <bits/stdc++.h>
using namespace std;

int n = 1e6 + 5;
int main()
{
	int n, k, v;
	int maxSum = 0, currSum = 0, currEl = 0, maxEl = 0, left = 0;
	vector<int> closest;
	cin >> n >> k;

	for (int x = 0; x < n; x++)
	{
		cin >> v;
		closest.push_back(v);
	}
	for (int right = 0; right < n; right++)
	{
		currSum += closest[right];
		currEl++;
		while (currSum > k)
		{
			currSum -= closest[left++];
			currEl--;
		}
		if (currEl > maxEl) maxEl = currEl, maxSum = currSum;
	}
	cout <<  maxEl << endl;
	return 0;
}
