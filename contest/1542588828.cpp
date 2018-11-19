#include<cstdio>
#include<algorithm>
#include<cstring>
#include<queue>
#include<iostream>
#define inf 1e9
#define MN
using namespace std;
char c[3],a[3];
int n;
bool k1,k2;
int main()
{
	cin>>a>>n;
	while(n--){cin>>c;if(c[0]==a[1])k1=1;if(c[1]==a[0])k2=1;if(c[0]==a[0]&&a[1]==c[1]){puts("YES");return 0;}}
	if(k1&k2)puts("YES");
	else puts("NO");
	return 0;
}