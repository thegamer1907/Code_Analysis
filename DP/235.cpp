#include<cstdio>
#include<cstdlib>
int a[10001],b[10001],i,j,z,s=0,q,n,m;
int main() {
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	scanf("%d",&a[i]);
	scanf("%d",&m);
	for(i=1; i<=m; i++)
	scanf("%d",&b[i]);
	for(i=1; i<n; i++) {
		for(j=i+1; j<=n; j++)
		if(a[i]>a[j]) {
			q=a[i];
			a[i]=a[j];
			a[j]=q;
		}
	}
	for(i=1; i<m; i++) {
		for(j=i+1; j<=m; j++)
		if(b[i]>b[j]) {
			q=b[i];
			b[i]=b[j];
			b[j]=q;
		}
	}
	z=0;
	for(i=1; i<=n; i++) {
		for(j=1; j<=m; j++) 
		if(a[i]==b[j]-1||a[i]==b[j]||a[i]==b[j]+1) {
			s++;
			z=z-2;
			a[i]=z;
			b[j]=z;
			break;
		}
	}
	printf("%d",s);
	return 0;
}