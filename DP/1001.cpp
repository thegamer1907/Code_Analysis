#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
#include<set>
#include<vector>
#include<queue>
#include<deque>
#include<stack>
#include<map>
using namespace std;
int arr[105];
int main()
{
	vector<int>v;
	//A. Flipping Game
	int n, sum=0,ones= 0,mx=0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] == 1)
			sum++;
	}
	ones = sum;
	mx = max(mx, ones);
	for (int j = 0; j < n; j++)
	{
		if (arr[j] == 0)
			sum++;
		else
			sum--;

		mx = max(sum, mx);
		if (sum < ones)
			sum = ones;
	}
	if (mx == ones)
		mx = mx - 1;
	cout << mx;
		return 0;
}