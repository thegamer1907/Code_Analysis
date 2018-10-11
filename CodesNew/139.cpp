#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int n, k, cnt = 1;
	
	cin >> n >> k;
	
	while(k % 2 == 0){
		cnt++;
		k = k / 2;
	}
	
	printf("%I64d\n", cnt);
	
	
	return 0;
}
