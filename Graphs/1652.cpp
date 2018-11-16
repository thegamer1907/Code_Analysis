#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include "cmath"
const int MAXN=3e4+9;
typedef long long ll;
using namespace std;
int main(int argc, char *argv[]) 
{
	int a[MAXN],n,t;
	cin>>n>>t;
	memset(a, 0, sizeof(a));
	for(int i=1;i<=n-1;i++)
		cin>>a[i];
		
	int i=1,k=1;
	bool flag=0;
	while(i<=t)
	{
		if(i==t)
		{
			flag=1;
			break;
		}
		
		else 
		{
			i=i+a[i];
			continue;
		}

	}
	if(flag) printf("Yes\n");
	else printf("NO\n");	
	
	return 0;	
}