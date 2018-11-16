#include <iostream>

using namespace std;

int main( void )
{
	int n, k;
	cin >> n >> k;
	int arr[50] = {-1};
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i]; 
	}
	int answ = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] >= arr[k-1] && arr[i] > 0) answ += 1;
	}
	cout << endl << answ;
}
