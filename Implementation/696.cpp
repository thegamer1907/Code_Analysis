#include<iostream>
#include<vector>
using namespace std;
/*
string is(int a)
{
	string s;
}
*/
main()
{
	int n, k;
	cin >> n >> k;
	vector<int> v;
	
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	
	if (v[k-1] <= 0)
	{
		int t = 0;
		for (int i = 0; i < k-1; i++)
			if (v[i] > 0)
				t++;
		cout << t;
		return 0;
	}
	
	int t = k;
	for(int i = k; i<n; i++)
	{
		if (v[i] >= v[k-1])
			t++;
		else
			break;
	}
	
	cout << t;
}
