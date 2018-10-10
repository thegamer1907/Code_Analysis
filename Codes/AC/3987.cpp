#include<cstdio>
#include<algorithm>
inline void read(int &a){
	char c=getchar();
	for(a=0;c>'9'||c<'0';c=getchar());
	for(;c<='9'&&c>='0';c=getchar())(a*=10)+=c-'0';
}
const int none=1e8;
int A[110000],F[110000],Mx[110000];
/*ij(i-1)*m+j*/
int n,m,k;
int main(){
	int i,j,li,ri;
	read(n); read(m);
	for(i=1;i<=n*m;i++)read(A[i]);
	for(j=1;j<=m;j++)F[j]=1;
	for(j=1;j<=m;j++)
	for(i=2;i<=n;i++)F[(i-1)*m+j]=A[(i-1)*m+j]>=A[(i-2)*m+j]?F[(i-2)*m+j]:i;
	for(i=1;i<=n;i++){
		Mx[i]=none;
		for(j=1;j<=m;j++)Mx[i]=std::min(Mx[i],F[(i-1)*m+j]);
	}
	read(k);
	for(i=1;i<=k;i++){
		read(li); read(ri);
		if(Mx[ri]<=li)printf("Yes\n");else printf("No\n");
	}
}