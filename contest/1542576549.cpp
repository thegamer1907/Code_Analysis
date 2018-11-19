#include<cstdio>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstring>
#include<cctype>
#include<queue>
#include<stack>
#include<map>
#include<set>
#include<iomanip>
#include<sstream>
#include<cstdlib>
#include<ctime>
#include<list>
#include<deque>
#include<bitset>
#include<fstream>
#define ld double
#define ull unsigned long long 
#define ll long long 
#define pii pair<int,int >
#define iiii pair<int,pii >
#define mp make_pair 
#define INF 1000000000
#define MOD 1000000007

using namespace std;

bool ok[30];int n,m;

int main()
{
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)

	{
		int s=0;
		for(int j=0;j<m;j++)
		{
			int x;
			scanf("%d",&x);
			s<<=1;
			s+=x;	
		}
		ok[s]=true;
	}
	
	for(int i=0;i<(1<<4);i++)
		for(int j=0;j<(1<<4);j++)if(ok[i]&&ok[j]&&(i&j)==0)
									{
										printf("YEs\n");
										return 0;
									}
	printf("NO\n");

	return 0;	
} 