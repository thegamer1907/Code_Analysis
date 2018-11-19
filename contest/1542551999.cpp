#pragma comment(linker, "/STACK:102400000,102400000") 
#include <iostream>  
#include <cstdio>  
#include <fstream>  
#include <algorithm>  
#include <cmath>  
#include <deque>  
#include <vector>  
#include <queue>  
#include <string>  
#include <cstring>  
#include <map>  
#include <stack>  
#include <set>  
#define Max(a,b) a>b?a:b
#define Min(a,b) a>b?b:a
#define mem(a,b) memset(a,b,sizeof(a))
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int dir[4][2]= {{1,0},{-1,0},{0,1},{0,-1}};
const double eps = 1e-6;
const double Pi = acos(-1.0);
const int INF=0x3f3f3f3f;//1061109567
 
const int MAXN = 3e5+5; 

int a[20] = {0};

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	for(int i=0; i<n; i++)
	{
		int sum = 0;
		for(int j=0; j<m; j++)
		{
			int x;
			scanf("%d", &x);
			sum += (1<<j)*x;
		}
		a[sum] = 1;
	}
	int flag = 0;
	for(int i=0; i<20; i++)
	{
		if(i==0 && a[i])
		{
			flag = 1;
			continue;
		}
		for(int j=i+1; j<20; j++)
		{
			if(a[i]&&a[j])
			{
				if((i&j) == 0)
					flag = 1;
			}
		}
	}
	if(flag)	printf("YES\n");
	else 	printf("NO\n");
}


