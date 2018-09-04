#include <bits/stdc++.h>
using namespace std;


bool solve(long long n, long long k){
	long long a1 = 0;
	long long a2 = 0;
	while (n > 0){
		if(n > k){
			n = n - k;
			a1+=k;
		}
		else{
			a1+=n;
			n = 0;
		}
		a2 += n / 10;
		n = n - n / 10;
	}
	if(a1 >= a2) return true;
	else return false;
}

long long bin(long long n){
	long long l = 1, r = n - 1, mid;
	mid = (l + r) / 2;
	while(l < r){
		if(solve(n,mid) == true) r = mid;
		else l = mid + 1;
		mid = (l + r) / 2;
	}
	return l;
}

int main(){
	long long n;
	cin >> n;
	cout << bin(n);
	return 0;
}
