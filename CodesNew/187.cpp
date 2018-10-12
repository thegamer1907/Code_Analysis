#include <iostream>
#include <map>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <string>
#include <queue>
#include <math.h>
#include <unordered_set>
using namespace std;

#define endl "\n"
#define pb push_back
#define INF ll_MAX/10
typedef long long ll;
typedef pair<ll,ll> PII;
typedef long long ll;


int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, t;
    cin >> n >> t;
    ll a[2*n];

    for ( int i = 0 ; i < n ; i++ ){
    	cin >> a[i];
    	a[n+i] = a[i];
    }
    //for (int i = 0 ; i < 2*n ; i++ )	cout << a[i] << " "; cout << endl;
    ll l[2*n];
    int i = 0, j = 0;

    ll cur_sum = 0;
    
    while( i < n && j < n ){

    	cur_sum += a[j];

    	if ( cur_sum > t ){
    		
    		while( i <= j && cur_sum > t ){
	    		l[i] = j-i;
    			cur_sum -= a[i];
    			i++;
    		}
    	}
    	j++;

    }
    if ( j == n ){
		while( i < j ){
			l[i] = j-i;
			cur_sum -= a[i];
			i++;
		}
	}
	
    ll m = 0;
	for ( int i = 0 ; i < n ; i++ ){
		//cout << l[i] << " ";
	    m = max(l[i], m);
	}
	//cout << endl;
	cout << m << endl;

    return 0;
}
