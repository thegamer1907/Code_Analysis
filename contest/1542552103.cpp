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

int main()
{
	int h, m, s, t1, t2;
	scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
	h = h * 10 % 120;
	if(m || s)	h++;
	m = m * 2 % 120;
	if(s)	m++;
	s = s * 2 % 120;
	t1 = t1 * 10 % 120;
	t2 = t2 * 10 % 120;
	int f1=0; 
	int f2=0;
	int f3=0;
	int f4=0;
	int f5=0;
	int f6=0;
	if(t1>t2)	swap(t1, t2);
	if(h>t1 && h<t2)
		f1 = 1;
	if(m>t1 && m<t2)
		f2 = 1;
	if(s>t1 && s<t2)
		f3 = 1;
		
	if(h<t1 || h>t2)
		f4 = 1;
	if(m<t1 || m>t2)
		f5 = 1;
	if(s<t1 || s>t2)
		f6 = 1;
	if(f1&&f2&f3 || f4&&f5&f6)	printf("YES\n");
	else	printf("NO\n"); 
}


