#include<bits/stdc++.h>

#define pb push_back
#define vi vector < int >
#define ii pair < int, int >
#define vii vector < vector < int > >
#define ll long long
#define X first
#define Y second
#define mp make_pair

using namespace std;

const int MAXM = 1e5 + 10;

ll n, m, k, shift = 0;
vector < ll > in;

ll query( int x )
{
	return 0 - shift;
}



int binary( ll pl )
{
	//cout << pl << "pl\n";
	ll lo = 1, hi = m, ans = -1;
	while ( lo <= hi )
	{
		ll mid = lo + ( hi - lo ) / 2;
		ll loc = query( mid ) + in[ mid ];
		ll page = ( loc - 1 ) / k;
		
		if ( page == ( pl - 1 ) / k )
		{
			ans = mid;
			lo = mid + 1;
		} else
		{
			hi = mid - 1;
		}
	}
	//cout << "ok\n";
	return ans;
}

int main()
{
	cin >> n >> m >> k;
	in.pb( 0 );
	for ( ll i = 1;i <= m;i++ )
	{
		ll x;cin >> x;
		in.pb( x );
	}
	
	/*ll poc = 1, sol = 1;
	shift = 1;
	for ( int i = 2;i <= m;i++ )
	{
		if ( ( in[ i ] - shift - 1 ) / k == ( in[ poc ] - 1 ) / k ) 
		{
			shift++;
		}
		else
		{
			poc = i;
			sol++;
		}
	}
	cout << sol << "\n";
	
	*/
	ll poc = 1, sol = 0;
	while ( poc <= m )
	{
		if ( poc >= m )	
		{
			sol++;break;
		}
		//cout << query( poc ) + in[ poc ] - 1 << "\n";
		//cout << poc << "\n";
		ll new_poc = binary( query( poc ) + in[ poc ] );
		//cout << poc << "ok\n";
		//cout << new_poc << ' ' << in[ new_poc ] << "l\n";
		shift = new_poc;
		poc = new_poc + 1;
		sol++;
		//break;
	}
	cout << sol << "\n";
	
	return 0;
}