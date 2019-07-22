#include <iostream>
#include <math.h>
#include <string>
#include <set>
#include <algorithm>
#include <vector>

using namespace std;

#define FOR(i,j,k,in) for(int i=j; i<k; i+=in)
#define REP(i,j) FOR(i,0,j,1)
#define read(type) readInt<type>()
#define SCD(t) scanf("%d",&t)
#define SCLLD(t) scanf("%lld",&t)
#define SCF(t) scanf("%f",&t)
#define SCS(t) scanf("%s",t)

typedef long long int int64;

template <typename T> inline void write(T x)
{
	int i = 20;
	char buf[21];
	// buf[10] = 0;
	buf[20] = '\n';

	do
	{
		buf[--i] = x % 10 + '0';
		x/= 10;
	}while(x);
	do
	{
		putchar(buf[i]);
	} while (buf[i++] != '\n');
}

template <typename T> inline T readInt()
{
	T n=0,s=1;
	char p=getchar();
	if(p=='-')
		s=-1;
	while((p<'0'||p>'9')&&p!=EOF&&p!='-')
		p=getchar();
	if(p=='-')
		s=-1,p=getchar();
	while(p>='0'&&p<='9') {
		n = (n<< 3) + (n<< 1) + (p - '0');
		p=getchar();
	}

	return n*s;
}

void printarr(int arr[],int n){
	REP(i,n) {
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int64 fastexpo(int64 n,int64 p,bool mod){
	int64 ans;
	if(p == 1) {
		ans = n;
	}
	else {
		int64 tmp = fastexpo(n,p/2,mod);
		int64 ans;
		if(p%2 == 1) {
			ans = n*tmp*tmp;
		}
		else {
			ans = tmp*tmp;
		}
	}
	if(mod) {
		return ans%1000000007;
	}
	else {
		return ans;
	}
}

int main() {
	int64 n = read(int64);
	int64 m = read(int64);
	int64 k = read(int64);
	int64 count = 0;
	int64 ops = 0;
	int64 l = 0;
	int64 x, jump;
	int64 u = k;
	int64 arr[m];
	REP(i,m) {
		arr[i] = read(int64);
	}
	while(l < m) {
		x = arr[l];
		if(x > u) {
			if(count == 0) {
				jump = ceil((float)(x-u)/k);
				u += jump*k;
			} else {
				ops++;
				if(x<=u+count) {
					u += count;
				} else {
					jump = ceil((float)(x-u-count)/k);
					u += count+(jump*k);
				}
			}
			count = 0;
		} else {
			l++;
			count++;
		}
	}
	if( count != 0) {
		ops++;
	}
	write(ops);
}