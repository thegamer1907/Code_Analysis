#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
	string s; cin >> s;

	ll breadPer = 0;
	ll meatPer = 0;
	ll cheesePer = 0;

	for(int i=0; i<s.length(); i++){
		if(s[i] == 'B')
			breadPer++;

		if(s[i] == 'C')
			cheesePer++;

		if(s[i] == 'S')
			meatPer++;
	}

	ll initBread, initMeat, initCheese;
	cin >> initBread >> initMeat >> initCheese;

	ll priceBread, priceMeat, priceCheese;
	cin >> priceBread >> priceMeat >> priceCheese;

	ll money; cin >> money;

	ll l = 0;
	ll r = 1e14;
	while(l <= r){
		ll m = l + (r-l)/2;

		ll breadCost = max(0LL, (breadPer*m)-initBread)*priceBread;
		ll cheeseCost = max(0LL, (cheesePer*m)-initCheese)*priceCheese;
		ll meatCost = max(0LL, (meatPer*m)-initMeat)*priceMeat;
		ll totCost = breadCost + cheeseCost + meatCost;

		if(totCost > money)
			r = m - 1;

		else
			l = m + 1;
	}

	cout << l-1 << endl;

	return 0;
}
