#include <bits/stdc++.h>

using namespace std;

#define N 100010

int a[N];

int main(){
#ifndef ONLINE_JUDGE
	freopen("in.in", "r", stdin);
	freopen("out.out", "w", stdout);
#endif
	int n, sum=0, Mx=-100;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
		sum+=a[i];
	}	
	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){
			int cnt=0;
			for(int k=i; k<=j; k++){
				if(a[k]==1)	cnt--;
				else	cnt++;
				
			}
			Mx=max(cnt, Mx);
		}
	}
	printf("%d\n", sum+Mx);
	return 0;

}

                 