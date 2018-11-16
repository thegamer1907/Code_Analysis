#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
#include <map>
#include <assert.h>

#define N 100005
#define LL long long int 
#define MOD 1000000007
using namespace std;

LL dp[N];
int main() {
	int t,k,i,j;
	cin >> t >> k;
	for (i=0;i<N;i++) {
		if (i<k) dp[i]=1;
		else dp[i]=(dp[i-k]+dp[i-1])%MOD;
	}
	dp[0]=0;
	for (i=1;i<N;i++) dp[i]=(dp[i-1]+dp[i])%MOD;
	while(t--) {
		cin >> i >> j;
		cout << (dp[j]-dp[i-1]+MOD)%MOD << '\n';
	}
	return 0;
}
