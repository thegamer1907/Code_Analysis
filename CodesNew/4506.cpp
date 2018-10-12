#include <bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	cin >> n;

	vector < int > v(n);
	for(int i = 0; i < n; i++)
		cin >> v[i];

	sort(v.begin(), v.end());

	int i = 0, j = n/2, lim = n/2;
	for(; i < lim; i++)
	{
		while(j < v.size() && v[j] < v[i]*2)
			++j;
		if(j < v.size())
		{
			++j;
			n--;
		}
		else
			break;
	}

	cout << n << endl;




	return 0;
}