#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n, t;
	cin >> n >> t;

	vector<int> vec = vector<int>();
	for (int i = 0; i < n-1; i++)
	{
		int temp;
		cin >> temp;
		vec.push_back(temp);
	}

	int met = 1;
	while (met < t)
	{
		met += vec[met-1];
	}

	met == t ? cout << "YES" : cout << "NO";

	//system("pause");

	return 0;
}