#include<bits/stdc++.h>
using namespace std;

int n,k,c,num;
bool pan[16];

int main(){
	scanf("%d%d",&n,&k);
	for(int i=0; i<n; i++){
		num=0;
		for(int j=0; j<k; j++){
			scanf("%d",&c);
			num+=(c<<j);
		}
		pan[num]=1;
	}
	bool flag=0;
	for(int i=0; i<(1<<k); i++)
		for(int j=i; j<(1<<k); j++)
			if(pan[i] && pan[j] && (i&j)==0 ) flag=1;
	if(flag) printf("YES\n");
	else printf("NO\n");
	return 0;
}