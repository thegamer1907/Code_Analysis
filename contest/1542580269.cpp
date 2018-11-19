#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
const int MAXN=100005;
int A[MAXN][5];
int H[1<<4];
int main()
{
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		int tmp=0;
		for(int j=1;j<=k;j++)
		{
			cin>>A[i][j];
			tmp=(tmp<<1)|A[i][j];
		}
		H[tmp]++;
	}
	if(H[0]){cout<<"YES";return 0;}
	for(int S1=0;S1<(1<<k);S1++)
		for(int S2=0;S2<(1<<k);S2++)
		{
			if(S1==S2||!H[S1]||!H[S2])continue;
			bool f=1;
			for(int i=1;i<=k;i++)
				if((S1&(1<<(i-1)))&&(S2&(1<<(i-1))))f=0;
			if(f){cout<<"YES";return 0;}
		}
	cout<<"NO";
	
	
	
	return 0;
}
