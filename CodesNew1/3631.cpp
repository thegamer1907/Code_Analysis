#include<bits/stdc++.h>
using namespace std;
const int maxn = 1000;
int n,m,a[maxn],_max=0,sum=0,_min=99999999;

int main(){
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
		_max=max(_max,a[i]);
	}
	_min=max(_max,(sum+m-1)/n+1);
	_max=_max+m;
	printf("%d %d\n",_min,_max);
	return 0;
} 