#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>



using namespace std;


typedef long long ll ;


ll NB, NS, NC, PB, PS, PC, RB, RS, RC, money, INF = 100000000000000ll; 


void input(){

	string s;
	cin >> s;

	cin >> NB >> NS >> NC >> PB >> PS >> PC >> money;

	for(char ch : s)
		if(ch == 'B')
			RB++;
		else if(ch == 'S')
			RS++;
		else
			RC++;

	//cout << "RB = " << RB << ", RS = " << RS << ", RC = " << RC;
}


bool doable(long long target){

	//cout << "Target = " << target << endl;

	ll moreB = (RB * target) - NB;
	ll moreS = (RS * target) - NS;
	ll moreC = (RC * target) - NC;

	//cout << "moreB = " << moreB << ", moreS = " << moreS << ", moreC = " << moreC << endl; 

	ll spending = 0;

	if(moreB > 0)
		spending += moreB * PB;
	if(moreS > 0)
		spending += moreS * PS;
	if(moreC > 0)
		spending += moreC * PC;

	//cout << "Spending = " << spending << endl;

	return spending <= money;
}


ll solve(){

	ll lo = 0, hi = INF, mid;

	while(lo < hi){

	//	cout << "l = " << lo << ", r = " << hi << endl;

		mid = (lo + hi + 1) / 2;

		if(doable(mid))
			lo = mid;
		else
			hi = mid - 1;
	}

	for(ll i = lo+2 ; i >= lo-2 ; i--)
		if(doable(i))
			return i;

	return 0;
}


int main(){

	input();
	cout << solve();

	return 0;
}


