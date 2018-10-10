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
			if(cnt < k)cnt++, res++;
			else{
				while(s[l] == 'a' && l < n)l++;
				l++;
				res++;
			}
		}
		else res++;
		Max = max(Max, res - l + 1);
	}
	cnt = 0, l = 1;
	res = 0;
	for(int i = 1; i <= n; i++) {
		if(s[i] != 'b') {
			if(cnt < k)cnt++, res++;
			else{
				while(s[l] == 'b' && l < n)l++;
				l++;
				res++;
			}
		}
		else res++;
		Max = max(Max, res - l + 1);
	}
	printf("%d\n", Max);
	return 0;
}