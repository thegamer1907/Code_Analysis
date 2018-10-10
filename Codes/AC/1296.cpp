#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
	set <string> h;
	string u;
	int n, m, p;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> u;
		h.insert(u);
	}

	for (int i = 0; i < m; i++)
	{
		cin >> u;
		h.erase(u);
	}
	p=n-h.size();
	if (n > m) cout << "YES";
	else if (n < m) cout << "NO";
	else {
		if (p % 2 == 1) cout << "YES";
		else cout << "NO";
	}
	
	//system("pause");
	return 0;
}