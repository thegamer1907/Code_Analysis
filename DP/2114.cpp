#include<bits/stdc++.h>

#define LL long long
#define LD long double
#define pb push_back
#define mp make_pair
#define INF 1000000007
#define scn(a) scanf("%lld", &a)

using namespace std;

LL power(LL x, LL y, LL p = 1e18+10) 
{ 
    LL res = 1;      // Initialize result 
  
    x = x % p;  // Update x if it is more than or  
                // equal to p 
  
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res*x) % p; 
  
        // y must be even now 
        y = y>>1; // y = y/2 
        x = (x*x) % p;   
    } 
    return res; 
} 

LL gcd(LL a, LL b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
}

vector<LL>v;

int main() {
	LL n,m;
	scn(n);scn(m);

	LL store[2][n];

	for(LL i=0;i<n;i++)
		scn(store[0][i]);

	map<LL, LL>xm;

	LL last=0;
	for(LL i=n-1;i>=0;i--) {
		if(xm[store[0][i]]==0){
			store[1][i]=last+1;
			last=last+1;
			xm[store[0][i]]=1;
		} else
		store[1][i]=last;
	}

	while(m--) {
		LL x;
		scn(x);
		cout<<store[1][x-1]<<endl;
	}
}