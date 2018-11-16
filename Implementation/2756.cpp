#include<bits/stdc++.h>
using namespace std;
int main(){
	int mmax=-1;
	int n;
	scanf("%d",&n);
	int sum=0;
	int p;
	for(int i=0;i<n;i++){
		scanf("%d",&p);
		sum+=p;
		mmax=max(mmax,p);
	}
	printf("%d\n",mmax*n-sum);
}