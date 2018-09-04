#include <bits/stdc++.h>

using namespace std;

#define LL unsigned long long

int calc(int x) {
	int ret = 0;
	while(x) ret += x % 10, x /= 10;
	return ret;
}

int main() {
    int k;
    cin >> k;
    int js = 0;
    for(int i = 19; ; i ++) {
    	if(calc(i) == 10) js ++;
    	if(js == k) {
    		std:: cout << i;
    		return 0;
		}
	}
    return 0;
}