#include "bits/stdc++.h"
using namespace std;
const int MAX=4;
int n,k,i,j,x,y,a[MAX],f[1<<MAX],used[MAX];
bool ok;

void func(int cnt)
{
	if(cnt>4) return ;
	
	for(int mask=0;mask<(1<<k);mask++)
	{
		if(f[mask]==0) continue;
		f[mask]--;
		
		bool good=true;
		for(int i=0;i<k;i++)
		{
			if(mask&(1<<i)) used[i]++;
			if(used[i]>(cnt+1)/2) good=false;
		}
		
		if(good) ok=true;
		func(cnt+1);
		
		f[mask]++;
		for(int i=0;i<k;i++) 
			if(mask&(1<<i)) used[i]--;
	}
}

int main()
{
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		y=0;
		for(j=0;j<k;j++)
		{
			scanf("%d",&x);
			if(x) y+=(1<<j);
		}
		f[y]++;
	}
	
	func(0);
	
	if(ok) printf("YES");
	else printf("NO");
}