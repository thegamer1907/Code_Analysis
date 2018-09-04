#include <bits/stdc++.h>
using namespace std;

int check(int x){
	int s = 0;
	while(x){
		s += x%10;
		if(s > 10){
			return 0;
		}
		x /=10;
	}
	if(s == 10){
		return 1;
	}
	return 0;
}
int main(){
	int k; scanf("%d",&k);
	int a[10005];
	int cnt = 1;
	for(int i = 1; ; i++){
		if(check(i)){
			a[cnt++] = i;
		}
		if(cnt > 10000)
			break;
	}
	printf("%d\n",a[k]);
}
