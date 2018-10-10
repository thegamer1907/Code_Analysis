
#include <bits/stdc++.h>

using namespace::std;

int main( void )
{
	string s;
	long long nb, ns, nc, pb, ps, pc, r, bb = 0LL, ss = 0LL, cc = 0LL;
	cin >> s >> nb >> ns >> nc >> pb >> ps >> pc >> r;
	long long lo = 0LL, hi = 10000000000000LL, respuesta = 0LL;

	for( int i = 0; i < s.length(); i++ )
	{
		if( s[i] == 'B' ) bb++;
		if( s[i] == 'S' ) ss++;
		if( s[i] == 'C' ) cc++;
	}

	while( lo <= hi )
	{
		long long c = 0LL;
		long long mid = (lo+hi)/2;
		long long rb, rs, rc;
		rb = mid*bb;
		rs = mid*ss;
		rc = mid*cc;

		if( rb > nb ) c += pb*(rb-nb);
		if( rs > ns ) c += ps*(rs-ns);
		if( rc > nc ) c += pc*(rc-nc);

		if( c <= r )
		{
			respuesta = max( respuesta, mid );
			lo = mid+1;
		}
		else hi = mid-1;
	}

	cout << respuesta << endl;

	return 0;
}	

















