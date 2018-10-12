#include <bits/stdc++.h>

#define mp make_pair
#define ff first
#define ss second

using namespace std;

typedef long long ll;

int v[500005];

int main(){
	int n;
	scanf("%d", &n);

	for(int i = 0; i < n; i++) {
		scanf("%d", &v[i]);
	}

	sort(v, v+n);
	int i = 0, j = n/2;

	int ans = n;
	
	while(i < n/2 and j < n) {
		while(j < n and 2*v[i] > v[j]) j++;
		if(j < n)
			ans--;
		i++;
		j++;
	}

	printf("%d\n", ans);
	
	return 0;
}