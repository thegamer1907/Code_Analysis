#include<bits/stdc++.h> 
#define fo(i,a,b) for(i=a;i<=b;i++)
#define fd(i,a,b) for(i=a;i>=b;i--)
#define max(a,b) (a>b?a:b) 
#define min(a,b) (a<b?a:b)
typedef long long ll;
using namespace std;
const int mo=1e9+7,ni=5e8+4;
int T,i,j,n,k,d;
int gcd(int a,int b){return b?gcd(b,a%b):a;}
int qs(int x,int y){
	int s=1;
	for(;y;y>>=1,x=(ll)x*x%mo) if (y&1) s=(ll)s*x%mo;
	return s;
}
struct ar{int a,b;}A,B,S1,S2;
ar operator *(ar x,ar y){return (ar){(ll)x.a*y.a%mo,((ll)x.a*y.b+x.b)%mo};}
ar operator +(ar x,ar y){return (ar){(x.a+y.a)%mo,(x.b+y.b)%mo};}
ar re(ar A){
	int rev=qs(A.a,mo-2);
	return (ar){rev,(ll)(mo-A.b)*rev%mo};
}
ar Qs(ar x,int y){
	if (x.a==1) return x.b=(ll)x.b*y%mo,x;
	int a=qs(x.a,y),b=(ll)(a-1)*qs(x.a-1,mo-2)%mo*x.b%mo;
	return (ar){a,b};
}
int work(int n,int k,ar A,ar B,ar S1,ar S2){
	if (!k) return (ll)S2.a*A.b%mo*qs(1-A.a+mo,mo-2)%mo;
	int k1=n%k,t=n/k-1;
	ar At=Qs(A,t+1),b=re(B*At),a=A*b,s1,s2;
	if (A.a==1) s2=(ar){t,(ll)(t+1)*t/2%mo*A.b%mo};else{
		int a=qs(A.a,t+1),rev=qs(A.a-1,mo-2);
		s2.a=(ll)(a-A.a+mo)*rev%mo,s2.b=(ll)(s2.a-t+mo)*rev%mo*A.b%mo;
	}s2=S1+S2*s2,s1=s2+S2*At;
	int sum=((ll)s1.b*k1+(ll)s2.b*(k-k1))%mo;
	s1.b=s2.b=0;
	return (sum+work(k,k1,a,b,s1,s2))%mo;
}
int main(){
	scanf("%d",&T);
	for(;T--;){
		scanf("%d%d",&n,&k);
		d=gcd(n,k),n/=d,k/=d;
		A=(ar){1,1},B=(ar){ni,1},S1=S2=(ar){1,0};
		printf("%d\n",(ll)work(n,k,A,B,S1,S2)*qs(n,mo-2)%mo);
	}
}