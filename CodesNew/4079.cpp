#include<bits/stdc++.h>
using namespace std;
const int maxn=200009;
const int Mod = 1000000007;
typedef pair<int,int> pp;
typedef long long LL;
#define Sint(a) scanf("%d",&a);
#define SLL(a) scanf("%I64d",&a);


LL a[maxn],sum[maxn];
int n,q;
int main(){
	Sint(n);Sint(q);
	for(int i=0;i<n;i++)SLL(a[i]);
	sum[0]=a[0];
	for(int i=1;i<n;i++)sum[i]=sum[i-1]+a[i];
	LL now=0,least=a[0];
	for(int i=0;i<q;i++){
		LL k;
		SLL(k);
		if(least-k>0){
			least-=k;
		}else{
			k-=least;
			int f=lower_bound(sum+now+1,sum+n,k+sum[now]+1)-sum;
			if(f==n){
				now=0;least=a[0];
			}else{
				least=sum[f]-k-sum[now];
				now=f;
			}
			//cout<<"now,least="<<now<<" "<<least<<endl;
		}
		printf("%I64d\n",n-now);
	}
}