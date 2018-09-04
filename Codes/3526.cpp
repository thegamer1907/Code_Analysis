#include <bits/stdc++.h>


#define ff first
#define ss second
#define mp make_pair
#define pb push_back


using namespace std;


typedef long long ll;
typedef long double ld;




ll cnt(ll n, ll k){
	
	ll eat = 0;
	
	for (;;){
		
		if (n <= k){
			eat += n;
			n = 0;
			break;
		}
		else{
			n -= k;
			eat += k;
		}
		
		
		n -= (n / 10);
	}
	
	return eat;
}


int main(){
	
	ll n;	
	cin >> n;
	
	ll l = 1, r = n / 2 + 1;
	
	
	while (r - l > 1){
		
		ll m = (l + r) / 2;
		if (2 * cnt(n, m) >= n)
			r = m;
		else
			l = m;

	}	
	
	if (2 * cnt(n, l) >= n)
		cout << l << endl;
	else
		cout << r << endl;
		
			
	return 0;
}