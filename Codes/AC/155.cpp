#include<iostream>
using namespace std;

int main()
{
	int a[1000002];
	int n, x, sum = 1;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> x;
		for(int j = sum; j < sum+x; j++) a[j] = i;
		sum += x;
	}
	int worm, d;
	cin >> worm;
	for(int i = 0; i < worm; i++){
		cin >> d;
		cout << a[d] << endl;
	}
	return 0;
}