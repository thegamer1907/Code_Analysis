#include<iostream>
#include<cstring>
#include<cstdio>
#define LL long long
#define MAXN 10005
using namespace std;
int N;
LL maxr=0;
LL sum=0;
int main(){
	cin>>N;
	LL ren=0;
	for(int i=1;i<=N;i++)
	{
		scanf("%d",&ren);
		sum+=ren;
		if(ren>maxr) maxr=ren;
	}
	
	LL ans=0;
	if(sum%(N-1)) ans=sum/(N-1)+1;
	else ans=sum/(N-1);
	if(ans<maxr) ans=maxr;
	cout<<ans;
	return 0;
}