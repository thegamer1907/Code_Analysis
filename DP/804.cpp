#include<bits/stdc++.h>
using namespace std;
int a[1000];
int main (){
#ifndef ONLINE_JUDGE
	freopen("in.in","r", stdin);
	freopen("out.out","w", stdout);
#endif
	int n,s=0;
	scanf("%d",&n);
	for (int i=1;i<=n;i++)scanf("%d",&a[i]);
	
	for (int i=1;i<=n;i++){
		for (int j=i;j<=n;j++){
			int x=0;
			for(int k=1;k<=i-1;k++)if(a[k]==1)x++;
			for (int k=i;k<=j;k++)if(a[k]==0)x++;
			for (int k=j+1;k<=n;k++)if(a[k]==1)x++;
			s=max(s,x);
		}
	}
	printf("%d",s);
	return 0;
}

            