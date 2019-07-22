#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
#include <cstdio>//sprintf islower isupper
#include <cstdlib>//malloc  exit strcat itoa system("cls")
#include <iostream>//pair
#include <fstream>
#include <bitset>
//#include <map>
#include <vector>
#include <stack>
#include <set>
#include <string.h>//strstr
#include <string>
#include <time.h>//srand(((unsigned)time(NULL))); Seed n=rand()%10 - 0~9;
#include <cmath>
#include <deque>
#include <queue>//priority_queue<long long, vector<long long>, greater<long long> > q;//less
#include <vector>//emplace_back
//#include <math.h>
//#include <windows.h>//reverse(a,a+len);// ~ ! ~ ! floor
#include <algorithm>//sort + unique : sz=unique(b+1,b+n+1)-(b+1);+nth_element(first, nth, last, compare)
using namespace std;//next_permutation(a+1,a+1+n);//prev_permutation
#define mem(a,b) memset(a,b,sizeof(a))
#define fo(a,b,c) for(a=b;a<=c;++a)//register long long i
#define fr(a,b,c) for(a=b;a>=c;--a)
#define pr printf
#define sc scanf
void swapp(long long &a,long long &b);
double fabss(double a);
long long maxx(long long a,long long b);
long long minn(long long a,long long b);
long long Del_bit_1(long long n);
long long lowbit(long long n);
long long abss(long long a);
//const long long INF=(1LL<<60);
const double E=2.718281828;
const double PI=acos(-1.0);
const long long inf=(1<<29);
const double ESP=1e-6;
const long long mod=(long long)1e9+7;
const long long N=(long long)1e6+6;

long long a[N];
long long er[1000];
priority_queue<long long, vector<long long>, greater<long long> > q;

int main()
{
	long long start=0,wait=0,cont=0,n,m,k,max_=0;
	long long temp=1;
	cin>>n>>m>>k;
	while(temp*k<=1e18+10)
	{
		er[++max_]=temp;
		temp<<=1;
	}
	for(long long i=1;i<=m;++i)
		cin>>a[i];
	sort(a+1,a+1+m);
	for(long long i=1;i<=m;++i)
		q.push(a[i]);
	start=(a[1]-1)/k*k+1;
	while(!q.empty())
	{
		long long cnt=0;
		while(!q.empty()&&q.top()-wait-start+1<=k)
		{
			cnt++;
			q.pop();
		}
		wait+=cnt;
		if(cnt)
			cont++;
		else
		{
			if(q.empty())
				break;
			long long now=q.top();
			for(long long j=max_;j>=1;--j)
			{
				//if(j==5)
				//	pr("k\n");
				if(now-wait-(start+er[j]*k)>=0)
					start+=er[j]*k;
			}
		}
	}
	cout<<cont<<endl;
	return 0;
}

/**************************************************************************************/

long long maxx(long long a,long long b)
{
	return a>b?a:b;
}

void swapp(long long &a,long long &b)
{
	a^=b^=a^=b;
}

long long lowbit(long long n)
{
	return n&(-n);
}

long long Del_bit_1(long long n)
{
	return n&(n-1);
}

long long abss(long long a)
{
	return a>0?a:-a;
}

double fabss(double a)
{
	return a>0?a:-a;
}

long long minn(long long a,long long b)
{
	return a<b?a:b;
}