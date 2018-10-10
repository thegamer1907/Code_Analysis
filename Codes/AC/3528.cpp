#include<bits/stdc++.h>

using namespace std;

long long n;
long long Half;

bool Check(long long xx){
	long long nn = n;
	long long Cou = 0;
	while(nn > 0){
		long long _ = min(xx, nn);
		nn -= _;
		Cou += _;
		nn -= (nn / 10);
	}
	return Cou >= Half;
}

int main(){
	cin >> n;
	Half = n / 2;
	Check(226994999);
	if(n % 2 == 1)
		Half++;
	long long l = 1, r = n;
	while(l < r){
		long long Mid = (l + r) >> 1;
		if(Check(Mid))
			r = Mid;
		else
			l = Mid+1;
	}
	cout << l;
	return 0;
}
