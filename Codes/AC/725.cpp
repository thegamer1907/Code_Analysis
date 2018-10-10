/*input
10000
*/
#include <bits/stdc++.h>
using namespace std;

long k;
long x=10;

long check(long t){
	long C=0;
	while(t>0){
		C+=(t%10);
		t/=10;
	}
	if(C%10==0) return 1;
				return 0;
}

int main(){
	cin >> k ;
	while(k){
		x+=9;
		k-=check(x);
	}
	cout<<x;
}