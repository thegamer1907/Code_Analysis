#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<queue>

using namespace std;

int n;
int k;
int v[2][2][2][2];

int tap=0;
int c[4];

void bt(int x, int y)
{
	//~ printf("Geldi tr");
	if(tap==1)return;
	if(x>=16)
	{
		if(y==0)return;
		
		//~ printf("Geldi tr");
		for(int i=0; i<4; i++)
		if( c[i] > (int)y/2 )
			return;
		
		tap=1;
		return;
	}
	
	int x1=x;
	int i1=x1%2; x1/=2;
	int i2=x1%2; x1/=2;
	int i3=x1%2; x1/=2;
	int i4=x1%2;
	
	//~ printf("%d %d %d %d\n",i1,i2,i3,i4);
	
	if(v[i4][i3][i2][i1]>0)
	{
		//~ printf("%d %d %d %d\n",i1,i2,i3,i4);
		c[0]+=i4;
		c[1]+=i3;
		c[2]+=i2;
		c[3]+=i1;
		bt(x+1,y+1);
		c[0]-=i4;
		c[1]-=i3;
		c[2]-=i2;
		c[3]-=i1;
	}
	
	if(tap==1) return;
	bt(x+1,y);
	
}

int main()
{
	scanf("%d%d",&n,&k);
	
	for(int i=0; i<n; i++)
	{
		int tmp[4];
		for(int j=0; j<4; j++)tmp[j]=0;
		
		for(int j=0; j<k; j++)
		scanf("%d",&tmp[j]);
		
		v[tmp[0]][tmp[1]][tmp[2]][tmp[3]]++;
		
	}
	
	bt(0,0);
	
	if(tap==1)
	printf("YES");
	else
	printf("NO");
	
	return 0;
}
