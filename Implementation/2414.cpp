#include<iostream>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	int time = 240-k, res = 0;
	for(int i = 1; i <= n; i++)
	{
		if(time >= i*5)
		{
			res++;
			time -= i*5;
		}
	}
	cout << res << "\n";
}
