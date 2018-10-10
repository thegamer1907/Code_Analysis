#include<bits/stdc++.h>
#define REP(i,n) for(int i=0;i<n;++i)
#define rep(i,n) for(int i=1;i<=n;++i)
#define boost ios::sync_with_stdio(0)
#define ms0(s) memset(s,0,sizeof(s))

#ifdef LOCAL
#define DEBUG 1
#else
#define DEBUG 0
#endif
#define $ if(DEBUG)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
template<typename T>
inline void read(T& x){
	int w=1; T data=0;
	char c=getchar();
	while(c!='-'&&!isdigit(c))c=getchar();
	if(c=='-')w=-1,c=getchar();
	while(isdigit(c))data=10*data+c-'0',c=getchar();
	x=data*(T)w;
}

template<typename T>
void write(T& x){
	 if(x<0) putchar('-'),x=~x+1;
	 if(x>9) write(x/10);
	 putchar(x%10+'0');
}


template<typename T>
void printvec(vector<T> vec){
	for(T v:vec) cout << ' ' << v;
	cout << '\n';
}
const int maxn=200005;
ll n,a[maxn];
int main()
{
 	#ifdef FREOPEN
		freopen("in.txt","r",stdin);
		//freopen("out.txt","w",stdout);
 		clock_t starttime=clock();
	#endif
	read(n);
	REP(i,n) read(a[i]);
	ll p1=0,p2=n-1,sum1=0,sum2=0,sum=0;
	bool adp1=1;
	while(p1<=p2){
		if(adp1){
			do{
				sum1+=a[p1++];
			}while(sum1<sum2);
		}
		else do{
			sum2+=a[p2--];
		}while(sum2<sum1);
		if(sum1==sum2) sum=sum1;
		adp1=!adp1;
	}
	printf("%I64d\n",sum);
	#ifdef FREOPEN
		freopen("CON","w",stdout);
		printf( "%d ms are used.\n",(int)(clock() - starttime) );
	#endif
	return 0;
}
