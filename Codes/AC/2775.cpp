#include <bits/stdc++.h>

using namespace std;

const int maxn = 1000005;

int z[ maxn ];

void Z( string s ){
	int n = s.size();
	int L = 0, R = 0;

	for( int i = 1; i < n; i++ ){
		if( i > R ){
			L = R = i;

			while( R < n && s[ R - L ] == s[ R ] ){
				R++;
			}

			z[ i ] = R - L;
			R--;
		}

		else{
			int k = i - L;

			if( z[ k ] < R - i + 1 ){
				z[ i ] = z[ k ];
			}

			else{
				L = i;
	
				while( R < n && s[ R - L ] == s[ R ] ){
					R++;
				}

				z[ i ] = R - L;
				R--;
			}
		}
	}
}

int main(){
	string s;
	cin >> s;

	Z( s );

	int n = s.size();
	int maxz = 0;
	string ans = "Just a legend";

	for( int i = 1; i < n; i++ ){
		if( z[ i ] + i == n && z[ i ] <= maxz ){
			ans = s.substr( i, z[ i ] );
			break;
		}

		maxz = max( maxz, z[ i ] );
	}

	cout << ans << endl;

	return 0;
}