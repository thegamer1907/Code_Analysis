// Think Twice Code Once
// NullByte 0x00
#include <iostream>
#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstring>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <iomanip>
#include <stdio.h>
#include <time.h>
using namespace std ;
// Template
typedef long long ll ;
typedef long double ld ;
const ll INF = 1e18 ;
const ll MAXN = 1e5 ;
const ll MOD = 1e9 + 7 ;
#define _Sync ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define _File freopen ( "input.txt" , "r" , stdin ) ; freopen ( "output.txt" , "w" , stdout ) ;
#define _End return cout << '\n' , 0 ;
#define pie pair<long long int , long long int>
#define sp setprecision
#define in insert
#define pb push_back
#define mp make_pair
#define X first
#define Y second
// Code
int n , m , ip , cnt , arr[MAXN] ;
int main(){
	_Sync
	// Begin Main Code
	cin >> n ;
	for ( int i = 0 ; i < n ; i ++ )
		cin >> ip , cnt += ip , arr[i] = cnt ;
	cin >> m ;
	for ( int i = 0 ; i < m ; i ++ )
		cin >> ip , cout << lower_bound(arr , arr + n , ip) - arr + 1 << "\n" ;
	// End Main Code
	_End
} 
