
#include <iostream>
#include <set>

using namespace std;
#define size 11000000
long long n, x, f[size];
int ciur[size], m, cnt[size];	
	
int main(){
	cin >> n;
	while(n--){scanf("%d", &x); cnt[x]++;}
	
	for (int i = 2; i <= 10000000; i++){
		if(ciur[i] == 0){
			for(int j = i; j <= 10000000; j+= i) ciur[j] = 1, f[i] += cnt[j];
		}
	}
	f[0] = 0;
	for(int i = 1; i <= 10000000; i++){
		f[i] += f[i-1];
	}
	cin >> m;
	while(m--){
		int l, r;
		cin >> l >> r;
		r = min(10000000, r);
		l = min(10000000, l);
		cout << f[r] - f[l-1] << "\n";
	}
}
