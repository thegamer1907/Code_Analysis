#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	char a[2];
	cin >> a;
	int n;
	cin >> n;
	char b[n][2];
	bool flg1 = false, flg2 = false;
	for (int i = 0; i < n; i++)
	{
		cin >> b[i][0] >> b[i][1];
		if (b[i][1] == a[0]) flg1 = true;
		if (b[i][0] == a[1]) flg2 = true;
		if (b[i][0] == a[0] && b[i][1] == a[1])
		{
			flg1 = true;
			flg2 = true;
		} 		
	}
	if (flg1 == true && flg2 == true)
		cout << "YES";
	else
		cout << "NO";
	
	
}
