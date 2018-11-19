#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
typedef long long LL;

char str[5],s[105][5];
int n,i,j,flag1,flag2;
int main()
{
	for(i=1;i<=2;i++) cin>>str[i];
	cin>>n;
	flag1=flag2=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2;j++)
		{
			cin>>s[i][j];
		}
		if(s[i][1]==str[1]&&s[i][2]==str[2])
		{
			flag1=flag2=1;
		}
		if(s[i][2]==str[1])
			flag1=1;
		if(s[i][1]==str[2])
			flag2=1;
	}
	if(flag1&&flag2)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}