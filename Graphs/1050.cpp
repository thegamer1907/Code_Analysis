#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> p;
	p.push_back(0);
	int n, t, k, tmp=1;
	bool flag = false;
	cin >> n >> t;
	n--;
	while (n--)
	{
		cin >> k;
		p.push_back(k);
	}
	unsigned int i = 1;
	while (i<p.size())
	{
		i += p[i];
		if (i == t)
		{
			cout << "YES";
			flag = true;
			break;
		}
	}

	if (!flag) cout << "NO";

	return 0;
}

