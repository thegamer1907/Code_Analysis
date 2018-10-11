#include <bits/stdc++.h>
using namespace std;

typedef long long int LL;
typedef unsigned long long uLL;
typedef pair < int , int > ii;
const int inf = 1e9;
const LL INF = 1e18;
const int N = 1e5 + 5;
const int mod = 1000000007;
const double eps = 1e-8;
const double pi = acos( -1.0 );

LL a[ N ];
vector < pair<LL,int> > V;
int n;
LL id;

int main( int argc , char const *argv[] ) {
        ios_base :: sync_with_stdio(false); cin.tie(NULL);
        cin >> n;
        for( int i = 1; i <= n; i++ ) cin >> a[i];
        for( int i = 1; i <= n; i++ ) {
              LL cur = id , lo = 1 , hi = inf , ret = 0;
              while( lo <= hi ) {
                    LL mid = ( lo+hi ) >> 1;
                    LL val = cur+(mid-1)*n;
                    if( val >= a[i] ) ret = val , hi = mid-1;
                    else lo = mid+1;
              }
              V.push_back( make_pair(ret,i) );
              id++;
        }
        sort( V.begin() , V.end() );
        cout << V[0].second << endl;
        return 0;
}






