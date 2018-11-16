#include <iostream>
using namespace std;
int main ()
{
	int n , index ;
	int arr[30003];
	cin >> n >> index;
	for (int i = 1; i < n ; i++)
	{
		cin >> arr[i];
	}
	int x = 1;
	while (x != n)
	{
		x += arr[x];
		if (x == index)
		{
			cout << "YES" << endl;
			break;
		}
	}
	if (x != index)
	{
		cout <<"NO"<<endl;
	}
	return 0;
}