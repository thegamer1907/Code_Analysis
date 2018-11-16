#include <iostream>
using namespace std;

typedef unsigned long long int uLL;

int main(){
	int k,w;
	uLL n;
	cin >> k >> n >> w;
	uLL sum = ((1+w) * w / 2)*k;
	if(sum >= n){
		cout << sum - n;
	} else {
		cout << 0;
	}
}