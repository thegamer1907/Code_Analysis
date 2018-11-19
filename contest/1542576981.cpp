#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>
#define ll int
using namespace std;
namespace FastIO
{
    const ll L=1<<15;
    char buffer[L],*S,*T;
    inline char getchar()
	{
        if(S==T){T=(S=buffer)+fread(buffer,1,L,stdin);if(S==T)return EOF;}
		return *S++;
    }
    inline ll Get()
	{
        register char C;register ll rec=0,f=1;
        for(C=getchar();C<'0'||C>'9';C=getchar())if(C=='-')f=-1;
        while(C>='0'&&C<='9')rec=(rec<<1)+(rec<<3)+(C-'0'),C=getchar();
        return rec*f;
    }
}using FastIO::Get;
const int MAXN=100005;
int Hash[MAXN][5];
int H[1<<4];
int main()
{
	int n,k;n=Get();k=Get();
	for(int i=1;i<=n;i++)
	{
		int Now=0;
		for(int j=1;j<=k;j++)
		{
			Hash[i][j]=Get();
			Now=(Now<<1)|Hash[i][j];
		}
		H[Now]++;
	}
	if(H[0]){cout<<"YES";return 0;}
	for(int S1=0;S1<(1<<k);S1++)
		for(int S2=0;S2<(1<<k);S2++)
		{
			if(S1==S2||!H[S1]||!H[S2])continue;
			bool f=1;
			for(int i=1;i<=k;i++)
				if((S1&(1<<(i-1)))&&(S2&(1<<(i-1))))f=0;
			if(f){puts("YES");return 0;}
		}
		puts("NO");	
	return 0;
}
