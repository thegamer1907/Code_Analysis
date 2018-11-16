#include<bits/stdc++.h>

using namespace std;
const int maxn = 1e2+10;
int a[maxn];

int main(){
	int n,x;
	while(~scanf("%d",&n)){
		int ans = 0;
		for(int i=0;i<n;i++){
			scanf("%d",&x);
			a[i] = x?-1:1;
			ans += x;
		}
		int sum = 0,maxx = -1;
		for(int i=0;i<n;i++){
			if(sum<0){
				sum = a[i];
			}else sum += a[i];
			maxx = max(sum,maxx);
		}
		printf("%d\n",ans + maxx);
	}
} 