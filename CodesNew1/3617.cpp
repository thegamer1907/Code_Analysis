#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,min, m, i, max = -1, sum = 0;
	cin>>n>>m;
	int *a = new int[n];
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
		sum += a[i];
		if (a[i] > max)
			max = a[i];
	}
	if ((m + sum) % n != 0) {
		min = ((m + sum)/n) + 1;
	}
	else { min = (m + sum)/n; }
	if (min < max) { min = max; }
	cout<<min<<" "<<(max+m);
	/*
	for (i = 0;i < n;i++) {
		while (m > 0) {
			if (a[i] < max)
			{
				a[i] += (max - a[i]);
				m -= ((max - a[i]));
			}
		}
	}
	if (m > 0) {
		min = (m / n) + a[0];
	}
	else {
		for(i=0;i<n )
	}*/
	
	
	
	
	
}