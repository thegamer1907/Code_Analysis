#include <bits/stdc++.h>

using namespace std;

bool vis[3700*12];
int h,m,s,t1,t2;

int main()
{
	cin>>h>>m>>s>>t1>>t2;

	h%=12;
	t1%=12;
	t2%=12;
	int pos=h*3600+m*60+s;
	int pos2=720*m+12*s;
	int pos3=720*s;
	vis[pos]=true;
	vis[pos2]=true;
	vis[pos3]=true;

	t1*=3600;
	t2*=3600;

	if(t1>t2) swap(t1,t2);
	bool ok=true;
	for(int i=t1+1;i<t2;i++)
	{
		if(vis[i])
		{
			ok=false;
			break;
		}
	}

	if(ok)
	{
		puts("YES");
		return 0;
	}

	ok=true;
	for(int i=t1-1;i>=0;i--)
	{
		if(vis[i])
		{
			ok=false;
			break;
		}
	}

	for(int i=43199;i>t2;i--)
	{
		if(vis[i])
		{
			ok=false;
			break;
		}
	}

	if(ok) puts("YES");
	else puts("NO");

        return 0;
}
