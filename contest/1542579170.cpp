#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
#define fup(i,a,b) for(int i=a; i<=b; ++i)
#define fwn(i,a,b) for(int i=b; i>=a; --i)

int n, k, data[100233];
bool ok;

bool bitv(int x, int pos)
{
	return x>>pos&1;
}

void set(int &x, int pos, int v)
{
	if(v)
		x = x|1<<pos;
	else
		x = x&~(1<<pos);
}

bool dfs(int x, int d)
{
	if(d==k)
		return *lower_bound(data+1,data+1+n,x)==x;
	bool ok = 0;
	if(bitv(x,d)==1)
	{
		set(x,d,0);
		ok |= dfs(x,d+1);
		set(x,d,1);
		ok |= dfs(x,d+1);
	}
	else
	{
		ok |= dfs(x,d+1);
	}
	return ok;
}

bool judge(int x)
{
	fup(i,0,k-1)
	{
		if(bitv(x,i))
			set(x,i,0);
		else
			set(x,i,1);
	}
	return dfs(x,0);
}

void deal()
{
	if(ok)
	{
		printf("YES\n");
		return;
	}
	sort(data+1,data+1+n);
	fup(i,1,n)
	{
		if(judge(data[i]))
		{
			ok = 1;
			break;
		}
	}
	if(ok)
		printf("YES\n");
	else
		printf("NO\n");
}

int main()
{
	ok = 0;
	scanf("%d %d", &n, &k);
	fup(tm,1,n)
	{
		int now = 0;
		fup(i,1,k)
		{
			int x;
			scanf("%d", &x);
			now = (now<<1)+x;
		}
		data[tm] = now;
		if(now==0)
			ok = 1;
	}
	deal();
	return 0;
}