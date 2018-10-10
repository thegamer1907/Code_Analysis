#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
typedef long long ll;

int ile, maks;
vector< int > cen;

pair< bool, ll > foo ( int k )
{
	vector< long long > tmp;
	for ( int i = 0; i < cen.size(); ++i )
		tmp.push_back( cen[i] );
	for ( int i = 0; i < tmp.size(); ++i )
		tmp[i] += (ll)(i + 1) * k;
	sort( tmp.begin(), tmp.end() );
	
	ll sum = 0;
	for ( int i = 0; i < k; ++i )	
		sum += tmp[i];
	return { sum <= maks, sum };
}	

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> ile >> maks;
	cen.resize( ile );
	for ( int i = 0; i < cen.size(); ++i )
		cin >> cen[i];
	int lo = -1;
	for ( int b = ile + 1; b >= 1; b /= 2 )
		while ( lo + b <= ile && foo( lo + b ).first )
			lo += b;
	cout << lo << ' ' << foo( lo ).second << '\n';
}