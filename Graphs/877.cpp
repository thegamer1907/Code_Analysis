#include<iostream>
using namespace std; 
int n, t; int a[30100]; int b[30100]; int c[30100]; int temp; bool k = false;
int main()
{
	cin >> n >> t;
	for (int i = 1; i <= n - 1; i++)
	{
		cin >> a[i];
		b[i] = i;
		c[i] = i + a[i];
	}
	temp = c[1];
	for (int i = 1; i <= n - 1; i++)
	{
		
		if (temp == t)
		{
			k = true;
			break;
		}
		else
		{
			temp = c[temp];
		}
	}
	if (k == true)
		cout << "YES";
	else cout << "NO";

	cin >> t;
	return 0;
}