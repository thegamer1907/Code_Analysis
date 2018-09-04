#include <iostream>
#include <cmath>

using namespace std;

long long N, s, e, mid, val, ans;

bool solve ( long long  x )
{
	bool f = 0;
	long long aux = N, ret = 0;

	while ( aux > 0 )
	{
		if ( !f )
		{
			x = min ( aux, x );
			aux -= x;
			ret += x;
			f ^= 1;
		}
		else
			aux = ceil ( double(double(9.0 * (double)aux) / 10.0) ), f ^= 1;
	}

	return ( ret >= ceil ( (double)N / 2.0 ) );
}

int main ()
{
	cin >> N;

	s = 1, e = N;
	while ( s <= e )
	{
		mid = (s + e) / 2;
		val = solve ( mid );

		if ( val )
		{
			ans = mid;
			e = mid - 1;
		}
		else
			s = mid + 1;
	}

	cout << ans << "\n";
	return 0;
}
