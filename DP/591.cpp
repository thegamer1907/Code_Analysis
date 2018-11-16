#include <iostream>

using namespace std;

int main() {
	int N = 1e5+1;
	int n, i, j;
	char pattern[N];
	int cum_occur[N] = {};
	
	scanf("%s", pattern);
	for(int i = 0; pattern[i]; i++) 
		if(pattern[i] == pattern[i+1])
			cum_occur[i+2] = cum_occur[i+1] + 1;
		else
			cum_occur[i+2] = cum_occur[i+1];
		
	scanf("%d", &n);
	for(int k = 0; k < n; k++) {
		scanf("%d %d", &i, &j);
		printf("%d\n", cum_occur[j] - cum_occur[i]);
	}
		
	return 0;
}