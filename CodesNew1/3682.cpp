#include <iostream>
using namespace std;
int main ()
{
		int n, m, a[1000], i, max = -1, min, k = 0, max1 = - 1;
		cin >> n >> m;
		for( i = 1; i <= n; i++)
		{
			cin >> a[i];
			if( a[i] > max)
				max = a[i];

		}
		max = max + m;
		while( m != 0)
		{
			m--;
			min = a[1];
			for( i = 1; i <= n; i++)
			{
				
				if( a[i] <= min)
				{
					min = a[i];
					k = i;
				}	
				
				if(a[i] > max1 )
					max1 = a[i];
			}
			
			a[k] ++;
			if(a[k] > max1)
				max1 = a[k];
		}
		cout << max1 << " " << max;
}

