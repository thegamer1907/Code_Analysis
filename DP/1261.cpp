#include <bits/stdc++.h>

using namespace std;

int main( ){
	int n , a ;
	int count = 0 , extra0 = 0 , extra0max = -1 ;
	cin >> n ;
	while( n-- ){
		cin >> a ;
		if( a == 1 ) {
			count += 1 ;
			if( extra0 > 0 )
				extra0 -= 1 ;
		}
		else {
			extra0 += 1 ;
			if( extra0 > extra0max )
				extra0max = extra0 ;
		}
	}
	cout << count + extra0max << "\n" ;
    return 0;
}
