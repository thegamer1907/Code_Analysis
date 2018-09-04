#include <bits/stdc++.h>
#define ll long long
using namespace std;

int n,m;

int main(){
	scanf("%d",&n);
	int tot=0;
	for(int i=1;i<=11000000;i++){
		int k=i;
		int cnt=0;
		while(k){
			cnt+=k%10;
			k/=10;
		}
		if(cnt==10) {
			tot++;
			if(tot==n){
				printf("%d",i);
				return 0;
			}
		}
	}
	
	
	return 0;
}