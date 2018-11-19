#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <bitset>
#include <set>
#include <list>
#include <deque>
#include <map>
#include <queue>
#define N 110
#define INF 0x3f3f3f3f
#define mod 1000000007
#define ll long long
const double pi=acos(-1.0);
using namespace std;

char x,y;

int main()
{
	int n,ans=0;
	cin>>x>>y;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		char a,b;
		cin>>a>>b;
		if(a==x && b==y)
		{
			ans=3;
			break;
		}
		if(b==x)
			ans|=2;
		if(a==y)
			ans|=1;
	}
	if(ans==3)
		printf("YES\n");
	else
		printf("NO\n");
}







