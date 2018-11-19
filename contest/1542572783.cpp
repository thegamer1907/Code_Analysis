#include <bits/stdc++.h>

using namespace std;


int main(){
	int a[5];
	int b[5];
	int c[5];

	scanf("%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4]);
	for (int i = 0; i < 5; ++i)
	{
		b[i] = i;
	}
	a[0] = (a[0]*30*120+(a[1]*60+a[2]))%(360*120);

	a[3]=(a[3]*30*120)%(360*120);
	a[4]=(a[4]*30*120)%(360*120);
	a[1] = (a[1]*6*120+a[2]*12)%(360*120);
	a[2] = (a[2]*6*120)%(360*120);


	sort(b,b+5,[=](int u,int v){
		return a[u]<a[v];
	});
	for (int i = 0; i < 5; ++i)
	{
		c[b[i]] = i;
	}

	if((5+c[4]-c[3])%5==1 || (5+c[3]-c[4])%5 == 1)printf("YES\n");
	else printf("NO\n");


    return 0;
}