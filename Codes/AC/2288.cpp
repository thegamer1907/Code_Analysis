#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <set>
#include <unordered_set>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <bits/stdc++.h>
#include <chrono>

#define lli long long int
#define ld  long double

using namespace std;
using namespace std::chrono;

bool primes[ (lli)1e7 + 9 ];
lli arr[ (lli)1e7 + 9 ];
lli seq[ (lli)1e7 + 9 ];

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    lli x = 0 , y = 0 , z = 0; cin >> x;
    for ( int i = 0; i < x; i++ ){ cin >> y; seq[ y ]++; }

    lli sum = 0;
    for ( int i = 2; i <= (int)1e7+5; i++ ){

            if ( !primes[ i ] ){

                    lli freq = 0; freq += seq[ i ];
                    for ( int j = i+i; j <= (int)1e7+5; j += i ){
                        primes[ j ] = 1;
                        freq += seq[ j ];
                    }
                    arr[ i ] = freq;
            }

            sum += arr[ i ];
            arr[ i ] = sum;
    }

    cin >> x;
    for ( int i = 0; i < x; i++ ){
        cin >> y >> z;
        if      ( y > (lli)1e7+5 ){ y = (lli)1e7+5; }
        if      ( z > (lli)1e7+5 ){ z = (lli)1e7+5; }

        cout << arr[ z ] - arr[ --y ] << endl;
    }
    return 0;
}