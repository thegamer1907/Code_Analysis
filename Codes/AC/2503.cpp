#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<map>
#include<queue>
#include<stack>
#include<set>
#include<cmath>
#include<vector>
#define pb push_back
#define lson rt<<1
#define rson rt<<1|1
using namespace std;
typedef long long ll;
const int MAXN=10000007;
int bit[MAXN+1],n;
int m,p,q;
int prime[MAXN], primesize;
bool isprime[MAXN];
void getlist(int listsize)
{
	memset(isprime, 1, sizeof(isprime));
	isprime[1] = false;
	for (int i = 2; i <= listsize; i++)
	{
		if (isprime[i])prime[++primesize] = i;
		for (int j = 1; j <= primesize&&i*prime[j] <= listsize; j++)
		{
			isprime[i*prime[j]] = false;
			if (i%prime[j] == 0)break;
		}
	}
}
int sum(int i)
{
    int s=0;
    while(i>0)
    {
        s+=bit[i];
        i -= (i&-i);
    }
    return s;
}
void add(int i,int x)
{
    while(i<=10000005)
    {
        bit[i]+=x;
        i+= (i&-i);
    }
}
int t;
void solve(int x)
{
	for (int i = 1; prime[i]*prime[i] <= x; i++)
	{
		if (x%prime[i] == 0)
			add(prime[i],1);
		while (x%prime[i]==0)
		{
			x /= prime[i];
		}
	}
	if (x != 1)
		add(x,1);
}

int main()
{
	int N;
	int x;
	getlist(10000005);
	while (scanf("%d",&N)!=EOF)
	{
	    memset(bit,0,sizeof(bit));
		for (int i = 1; i <= N; i++)
		{
			scanf("%d", &x);
			solve(x);
		}
		scanf("%d",&m);
		while(m--)
        {
            scanf("%d%d",&p,&q);
            if(q>10000000)
                q=10000001;
            if(p>10000000)
                printf("0\n");
            else
                printf("%d\n",sum(q)-sum(p-1));
        }
	}
}