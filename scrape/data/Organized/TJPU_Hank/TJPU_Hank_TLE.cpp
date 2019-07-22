#include<cstdio>
#include<set>
using namespace std;

set<long long> s;

int main(void){
	long long n,m,k;
	long long ans;
	long long x;
	long long p;
	long long a;
	scanf("%lld%lld%lld",&n,&m,&k);
	while( m-- ){
		scanf("%lld",&x);
		s.insert(x);
	}
	
	p=1;
	a=0;
	ans=0;
	for(long long i=1; i<=n; i++){		
		if( p>k ){
			if( a>0 ){
				p-=a;
				a=0;
				ans++;
			}else p=1;
		}
		if( s.find(i) != s.end() ){
			a++;
		}
		p++;		
	}
	if( a>0 ) ans++;
	
	printf("%d",ans);
	
	return 0;
}