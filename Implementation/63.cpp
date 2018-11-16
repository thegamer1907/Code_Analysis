#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b,k,a1,b1;
	cin >> n >> a >> b;
	k = log2(n);
	if(a > b)
	{
		a1 = a;
		a = b;
		b = a1;
	}
	a1 = 1;
	b1 = n;
	if(a <= n/2)
		b1 = n/2;
	else
		a1 = n/2 + 1;

	--k;
	if(a <= (n/2) && b > (n/2))
		cout << "Final!\n";
	
	
	else
	{
		for(;k > 1;--k)
		{
			if(a <= ((a1 + b1 -1)/2) && b > ((a1 + b1 -1)/2) )
				break;
			if(a <= ((a1 + b1 -1)/2))
				b1 = ((a1 + b1 -1)/2);
			else
				a1 = (a1 + b1 -1)/2 + 1; 
		}
		cout << k << endl;
	}
	return (0);
	
}