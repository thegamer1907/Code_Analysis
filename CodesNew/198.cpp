#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,t;
	cin >> n >> t; 
	int* arr = new int[n];
	int j = 0;
	int ans = 0;
	int sum = 0;
	for(int i = 0 ; i < n  ; i++)
	{
		cin >> arr[i];
		sum += arr[i];
		if(sum > t)
		{
			sum -= arr[j];
			j++;
		}
		ans = max(ans , i -j + 1);
	}
	cout << ans;
	return 0;
}