#include<bits/stdc++.h>

#define LL long long
#define pb push_back
#define mp make_pair
#define INF 1000000007
#define scn(a) scanf("%lld", &a)

#define debug1(x) cerr << "at line " << __LINE__ << ": " << #x << " = " << (x) << endl
#define debug2(x) cerr << #x << " = " << (x) << endl

using namespace std;

LL power(LL x, LL y, LL p = INF) { 
	LL res = 1;      
	x = x % p;  
  
	while (y > 0) { 
		if (y & 1) 
			res = (res*x) % p; 
  
		y = y>>1;
		x = (x*x) % p;   
	} 

	return res; 
}

LL gcd(LL a, LL b) { 
	if (b == 0) 
		return a; 
	return gcd(b, a % b);  
}

int main() {
	LL n,k;
	scn(n);scn(k);

	vector<LL>v;
	for(LL i=0;i<n;i++) {
		LL ai;
		scn(ai);

		if(ai>0)
			v.pb(ai);
	}

	sort(v.begin(), v.end());

	if(v.size()<k) {
		cout<<v.size();
	} else {
		n=v.size();
		LL m = v[n-k];
		LL t = n-k;
		while(t>0 && v[t-1]==m) {
			t--;
		}

		cout<<n-t;
	}
}