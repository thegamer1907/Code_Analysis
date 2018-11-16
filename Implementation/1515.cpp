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
	string s;
	cin>>s;

	LL c1=0,c0=0;

	bool danger = false;

	for(auto x:s) {
		if(x==48) {
			c0++;
			c1=0;
		} else {
			c1++;
			c0=0;
		}

		if(c1==7 || c0==7) {
			danger=true;
			break;
		}	}

	if(danger){
		cout<<"YES";
	} else {
		cout<<"NO";
	}
}