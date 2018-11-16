#include <iostream>  
#include <vector>

using namespace std;

int main()
{
	int n, k, s;
	s = 0;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= a[k - 1] && a[i] > 0)
			s++;
		else
		{
			cout << s << endl;
			return 0;
		}
	}
	cout << s << endl;
	return 0;
}