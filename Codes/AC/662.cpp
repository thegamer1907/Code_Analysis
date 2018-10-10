#include<cstdio>
#include<cstring>
using namespace std;
const int maxn=1e5+10;
int a[maxn];

int main()
{
	int i,j,k,n,m,s,cnt=0;
	for ( i=19;i<=1e7+1e6;i++ ) {
		m=i;
		s=0;
		while ( m>0 ) {
			s+=m%10;
			m/=10;
		}
		if ( s==10 ) a[++cnt]=i;
	}
	while ( scanf("%d",&n)!=EOF ) {
		printf("%d\n",a[n]);
	}
	return 0;
}