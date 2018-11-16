#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,k;
	cin >> n >> k;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	int num = arr[k-1];
	while(true)
	{
		if(arr[k] != num)
			break;
		k++;
	}
	int count = 0;
	for (int i = 0; i < k; ++i)
	{
		if(arr[i] == 0) continue;
		count++;
	}
	cout << count << endl;
	return 0;
}