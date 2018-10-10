#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long                                                                                                         
int main() {
	long long n, k;
	cin >> n >> k;
	int cnt = 0;
	while (k % 2 == 0) {
		cnt++;
		k /= 2;
    }   
    printf("%d", cnt + 1);
   	return 0;
} 



























