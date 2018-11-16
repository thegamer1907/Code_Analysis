#include<bits/stdc++.h>
using namespace std;

const int PRECISION = 10;

int main() {
	#define endl '\n'
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0), cout.setf(ios::fixed), cout.setf(ios::showpoint), cout.precision(PRECISION);
	long long n;
	cin>>n;
	long long tot = 0;
	while(n) {
		if(n % 10 == 4 || n % 10 == 7) tot++;
		n /= 10;
	}
	if(tot == 4 || tot == 7) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
