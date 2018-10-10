#include<bits/stdc++.h>

using namespace std;

#define MAX_SUM 10
#define MAX_DIGITS 10

typedef long long ll;

int k, cnt;
vector<ll> numbers;
vector<int> digits;

void init() {
	numbers.clear();
	cnt = 0;
}

ll get_digits() {
	ll number = 0;
	
	for(size_t i = 0 ; i < digits.size() ; ++i) {
		number *= 10;
		number += digits[i];
	}
	
	return number;
}

void f(int sum, int digit) {
	if(digit < 0){
		return;
	}
	
	if(digit == 0) {
		if(sum == 0)numbers.push_back(get_digits());
		else return;
	}
	
	for(int i = 0 ; i < 10 ; ++i) {
		digits.push_back(i);
		if(sum >= i) f(sum-i, digit-1);
		digits.pop_back();
	}
}

int main() {
	init();
	cin >> k;
	
	f(MAX_SUM, MAX_DIGITS);
	
	sort(numbers.begin(), numbers.end());
	
	cout << numbers[k-1] << endl;
	
	return 0;
}
