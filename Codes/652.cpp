#include "bits/stdc++.h"
using namespace std;
vector<long long> dk;
const long long lim = 1e12;
long long g(long long x){
	long long y = 0;
	while(x) y += (x%10), x/= 10;
	return y;
}
void gen(long long v, int x){
	if(v > lim) return;
	if(x == 0 && g(v) == 10) dk.push_back(v);
	if(v == 0){
		for(int e = 1; e <= x; e++) gen(v * 10 + e, x - e);
	} else {
		for(int e = 0; e <= x; e++) gen(v * 10 + e, x - e);
	}
}
int main(){
	gen(0, 10);
	sort(dk.begin(), dk.end());
	int x;
	cin >> x;
	cout << dk[x-1] << endl;
	return 0;
}
