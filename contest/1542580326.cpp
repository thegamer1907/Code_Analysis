#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <queue>

using namespace std;

int n,k,state[100100];

int main()
{
	scanf("%d%d",&n,&k);	
	for(int i=1;i<=n;i++){
		for(int j=0;j<k;j++){
			int x;scanf("%d",&x);
			state[i]|=(x<<j);
		}
	}
	for(int i=0;i<(1<<k);i++){
		int j=((1<<k)-1)^i;
		bool f1=false,f2=false;
		for(int m=1;m<=n;m++){
			if((i|state[m])==i)f1=true;
			if((j|state[m])==j)f2=true;
			if(f1&&f2)return printf("YES")*0;
		}
	}	
	printf("NO");
	return 0;
}