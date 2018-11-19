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

char s[5]; 
char st[105][5];
int t1[50] = {0};
int t2[50] = {0};

int main()
{
	int n;
	scanf("%s", s);
	scanf("%d", &n);
	int flag = 0;
	for(int i=0; i<n; i++)
	{
		scanf("%s", st[i]);
		if(s[0] == st[i][0] && s[1] == st[i][1])
			flag = 1;
		t1[st[i][0]-'a']++;
		t2[st[i][1]-'a']++;
	}
	if(t2[s[0]-'a'] && t1[s[1]-'a'])
		flag = 1;
	if(flag)
		printf("YES\n");
	else
		printf("NO\n");
}

