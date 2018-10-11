#include<bits/stdc++.h>
using namespace std;

const int N=100050;
int n,a[N];

int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	for(int t=1,now=1;;t++){
		if(a[now]-t+1<=0)return printf("%d\n",now)*0;
		now=(now==n?1:now+1);
	}
}