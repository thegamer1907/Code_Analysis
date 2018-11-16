#include<iostream>
using namespace std;

int main()
{
	int k, n, w;
	cin >> k >> n >> w;
	int temp = (k + k * w)*w / 2;
	if (temp <= n)
		cout << 0;
	else
		cout << temp - n;
}