#include <iostream>
#include <cmath>
#define MAXN 100005

using namespace std;
typedef long long int lld;

double N, a[MAXN], ans, t[MAXN];

int main ()
{
	cin >> N;
	for ( int i = 0; i < N; i++ )
	{
		cin >> a[i];
		t[i] = max ( ceil ( (a[i] - i) / N ), (double)0 );
	}

	for ( int i = 0; i < N; i++ )
		if ( t[i] < t[(int)ans] )
			ans = i;

	cout << ans + 1 << "\n";

	return 0;
}
