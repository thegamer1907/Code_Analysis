#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main()
{
	long int n;
	long long int l;
	double d;
	cin >> n >> l;
	long long int  w[1005]; 
	for (int i = 1 ; i <= n; i++)
	{
		cin >> w[i];
	}
	sort(w , w + n+1);
	d =(double) w[1]; 
	for (int i = 1; i < n ; i++)
		d = max(d, (w[i+1] - w[i]) / 2.0);
	d = max(d, l - w[n]/1.0);
	// setpres is FUCKING IMPORTANT 
	cout << setprecision(9) <<d;

	return 0;
}