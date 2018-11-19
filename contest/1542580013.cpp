#include<cstdio>
using namespace std;
int N,K;
int a[100010];
int map[20];
int main()
{
	int i,j,k;
	scanf("%d%d",&N,&K);
	for(i=1;i<=N;i++){
		for(j=1;j<=K;j++){
			scanf("%d",&k);
			(a[i]<<=1)+=k;
		}
		for(j=0;j<=19;j++)
			if((j&a[i])==0)
				map[j]++;
	}
	for(i=1;i<=N;i++)
		if(map[a[i]]>0){
			printf("YES\n");
			return 0;
		}
	printf("NO\n");
	return 0;
}
