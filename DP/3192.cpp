#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, t, now = 0, res = 0, lst = 0x3f3f3f3f;
	scanf("%d", &n);
	while(n--){
		scanf("%d", &t);
		if(lst * 2 < t) now = 1;
		else ++now;
		res = max(res, now);
		lst = t;
	}
	printf("%d\n", res);
	return 0;
}