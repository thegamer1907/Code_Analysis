#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N = 1e6 + 2;

char s[N];
ll sum[N], freq[N];

int main() {
   	
   	int k; scanf("%d", &k);
   	
    scanf(" %s", s + 1);
    
    ll ans = 0;
    
    freq[0] = 1;
    
    for (int i = 1; s[i] != '\0'; ++i) {
    	sum[i] = sum[i - 1] + (s[i] == '1');
    	if (sum[i] >= k) ans += freq[sum[i] - k];
    	freq[sum[i]]++;
    }
    
    printf("%lld\n", ans);
    
   
    return 0;
}