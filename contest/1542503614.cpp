#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	string pw;
	string tr[100];
	cin >> pw >> n;
	for (int i = 0; i < n; i++)
		cin >> tr[i];
	for (int i = 0; i < n; i++)
		if (tr[i] == pw)
		{
			printf("YES");
			return 0;
		}
	bool w1 = false, w2 = false;
	for (int i = 0; i < n; i++)
		if (tr[i][1] == pw[0])
		{
			w1 = true;
			break;
		}
	for (int i = 0; i < n; i++)
		if (tr[i][0] == pw[1])
		{
			w2 = true;
			break;
		}
	if (w1 == true && w2 == true)
		cout << "YES"; 
	else
		cout << "NO";
	return 0;
}
