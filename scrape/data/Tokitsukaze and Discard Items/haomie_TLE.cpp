#include<iostream>
#include<cstdio>
#include<cstring>
#include<queue>
#include<algorithm>
#include<cmath>
#include<vector>
#include<map>
#include<set>
#include<deque>
#include<string>
using namespace std;
int main()
{
	#ifdef local
	freopen("1.txt","r",stdin);
	#endif
	long long n,m,k,num;
	cin>>n>>m>>k;
	queue<long long>a;
	int i;
	for(i=0;i<m;i++)cin>>num,a.push(num);
	long long page=n/k;
	long long fp;
	for(fp=1;fp<=page;fp++)
	{
		if(fp*k>=a.front())break;
	}
	long long ans=0,sum=0;
	while(!a.empty())
	{
		int j=0;
		while(!a.empty()&&a.front()-sum<=fp*k)a.pop(),j++;
		if(j==0)fp++;
		else
		{
			sum+=j;
			ans++;
		}
	}
	cout<<ans;
}