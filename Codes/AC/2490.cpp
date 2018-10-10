#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii; 

const int maxn = 1e6 + 10;
const int N = 10000001;
int cnt[N], x[N], t, n, m; 
bool bs[N]; 

int main(int argc, char const *argv[]) {
    scanf("%d", &n);
    for(int i = 0; i < n; ++i){
    	scanf("%d", &t); 
    	++cnt[t];
    } 
    for(int i = 2; i < N; ++i) {
    	x[i] = x[i - 1];
    	if(!bs[i]) {
    		for(int j = i; j < N; j += i){
    			x[i] += cnt[j];
    			bs[j] = 1;
    		}
    	}
    }
    int m; scanf("%d", &m); 
    for(int i = 0; i < m; ++i){
    	int l, r; 
    	scanf("%d %d", &l, &r);
    	r = min(r, N - 1);
    	l = min(l, N - 1);
    	printf("%d\n", x[r] - x[l-1]);
    }
}   