#include <bits/stdc++.h>
using namespace std;
#define Isvalid(nx,mx,n,m) nx>0&&nx<=n&&mx>0&&mx<=m
#define mem(a,b)      memset(a, b, sizeof (a))
#define pb            push_back
#define sz            size()
#define kohli         0
#define ll            long long
#define si(x)         scanf("%lld",&x)
#define vsort(v)      sort(v.begin(),v.end())
#define nl            printf("\n")
#define pi(x)         printf("%d",x)
#define ps(ch)        printf("%s",ch)
#define pll(x)        printf("%lld",x)
#define sp            printf(" ")
#define Pi            acos(-1)
#define chkbit(n, j) (((n & (1 << (j))) > 0) ? 1 : 0)
static const int mod = 1e9 + 7;
static const int mmx = 1e7 + 5;

/// for interactive problem use      fflush(stdout);
/// or                               cout.flush();

//int dx[] = {0, -1, -1, -1, 0, +1, +1, +1};
//int dy[] = {+1, +1, 0, -1, -1, -1, 0, +1};
//int dx[] = {-5, -4, -4, -3, -3, 0, 0, 3, 3, 4, 4, 5};
//int dy[] = {0, -3, 3, -4, 4, -5, 5, -4, 4, -3, 3, 0};
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, 1, -1};
int prime[100020];
int ara[100010],www[100010];
int x,y;
void sieve()
{
    for(int i=4;i<=100005;i+=2)
    {
        prime[i] = true;
    }
    prime[1] = true;
    int l = sqrt(100005);
    for(int i=3;i<=l;i+=2)
    {
        if(!prime[i])
        {
            for(int j=i*i;j<=100005;j+=(2*i))
                prime[j] = true;
        }
    }
    x = 0;
    y = 0;
    int flag=0;
    for(int i=1;i<=100005;i++)
    {
        if(!prime[i])
        {
            ara[x++] = i;
        }
        else
            www[i] = x;

    }
}

int main()
{
    //bitwise();
    //sieve();
    //vokam();
    //totient();
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int l,i,j;
    char ch[100010];
    while(scanf("%s",ch)==1)
	{
		l = strlen(ch);
		int flag=0;
		for(i=1;i<l;i++)
		{
			if(ch[i]=='A' && ch[i-1]=='B')
			{
				for(j=i+2;j<l;j++)
				{
					if(ch[j]=='B' && ch[j-1]=='A')
					{
						flag=1;
						break;
					}
				}
			}
			else if(ch[i]=='B' && ch[i-1]=='A')
			{
				for(j=i+2;j<l;j++)
				{
					if(ch[j]=='A' && ch[j-1]=='B')
					{
						flag=1;
						break;
					}
				}
			}
		}
		if(flag==1)
			printf("YES\n");
		else
			printf("NO\n");
	}
    return 0;
}
