/*
 * cf.cpp
 *
 *  Created on: Jun 10, 2018
 *      Author: Sparsh Sanchorawala
 */

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define pb push_back

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll n, m, k; cin>>n>>m>>k;

	ll l = 1, r = n * m;

	while(l <= r) {

		ll mid = (l + r) / 2;
		ll less = 0, more = 0;

		for(ll i = 1; i <= n; i++) {

			ll tempLess = (ll)ceil(mid / (double)i) - 1;
			less += tempLess <= m ? tempLess : m;

			ll tempMore = m - ((ll)floor(mid / (double)i) + 1) + 1;
			more += tempMore >= 0 ? tempMore : 0;
		}

		if(less < k && k < n * m - more + 1) {
			cout<<mid<<"\n"; return 0;
		}

		if(less == k && k + 1 == n * m - more + 1)
			r = mid - 1;
		else if(less == k - 1 && k == n * m - more + 1)
			l = mid + 1;
		else if(k <= less)
			r = mid - 1;
		else
			l = mid + 1;
	}

	return 0;
}

