// #include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<algorithm>
#include<vector>
#include<math.h>

using namespace std;

long long N, M, K, ar[100004];
int main () {
	scanf("%lld %lld %lld", &N, &M, &K);
	for(int i=0;i<M;++i)
		scanf("%lld", &ar[i]);
	long long val = K;
	int pos = 0, ans = 0, temp = 0;
	while(pos != M) {
		if(ar[pos]>val) {
			if(temp != 0)
				val += temp;
			else {
				val = val + ((ar[pos] - val)/K + ((ar[pos] - val) % K == 0?0:1))*K;
			}
			temp = 0;
		} else {
			if(temp == 0)
				++ans;
			++pos;
			++temp;
		}
	}
	printf("%d\n", ans);
	return 0;
}