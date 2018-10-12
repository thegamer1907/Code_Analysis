#include<bits/stdc++.h>
using namespace std;
int a[500005];
int main(){
	int n;scanf("%d",&n);
	for(int i=1;i<=n;i++)scanf("%d",a+i);
	sort(a+1,a+n+1);
	int I=n/2,J=n,m=n;
	while(I>0&&J>n/2){
		if(a[I]*2<=a[J]){
			m--;
			J--;
		}
		I--; 
	}
	printf("%d",m);
	return 0;
}
