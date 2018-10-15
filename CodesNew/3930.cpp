#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

#define fi(a,b,c) for(int a=b;a<=c;a++)
#define fo(a,b,c) for(int a=b;a>=c;a--)
#define long long long 

const int N = 2e5+1;

int n, q;
long a[N], b[N], c[N];

int Find(int j, long x){
	int l = j, r = n+1;
	while (l+1<r){
	 	int mid = l + r >> 1;
	 	if (c[mid] - c[j] <= x) 
	 		l = mid;
	 	else 
	 		r = mid;
	}
	return l;
}

main(){
 	cin >> n >> q;
	fi(i,1,n)
	 	cin >> a[i];
	fi(i,1,q)
		cin >> b[i];

	fi(i,1,n) 
		c[i] = c[i-1] + a[i];

	int l = 0;	
	long cost = 0;
	fi(i,1,q){
		if (b[i] <= cost)
			cost -= b[i];
		else{
			b[i] -= cost; cost = 0;
			int r = Find(l,b[i]);
			if (r == n){ 
				l = r;
				goto through;
			}

			if (c[r]-c[l] < b[i])                	
				cost = a[r+1] - (b[i] - c[r] + c[l]), l = r+1; 
			else 
				l = r;
		}
		through:;
		if (l == n && cost == 0)
			l = 0;

		if (cost > 0)
			cout << n-l+1 << "\n";
		else
			cout << n-l << "\n";	
	}
}
