#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
#include<cmath>
using namespace std;
const int maxn = 100000;
char s[maxn + 5];
int n, k, t, res, Max;
int main() {
	scanf("%d%d", &n, &k);
	scanf("%s", s + 1);
	int cnt = 0, l = 1;
	for(int i = 1; i <= n; i++) {
		if(s[i] != 'a') {
			cnt++;
			if(cnt > k) {
				cnt--;
				while(s[l] == 'a' && l <= n)l++, res--;
				l++;
			}
			else res++;
		}
		else res++;
		Max = max(Max, res);
	}
	cnt = 0, l = 1;
	res = 0;
	for(int i = 1; i <= n; i++) {
		if(s[i] != 'b') {
			cnt++;
			if(cnt > k) {
				cnt--;
				while(s[l] == 'b' && l <= n)l++, res--;
				l++;
			}
			else res++;
		}
		else res++;
		Max = max(Max, res);
	}
	printf("%d\n", Max);
	return 0;
}