#include<cstdio>
#include<cstdlib>
int  max=-10,j,c=0,g,n,i,a[1001],m;
int main () {
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	scanf("%d",&a[i]);
	for(i=1; i<=n; i++)
	 if(a[i]==1) c++;
	 g=c;
	 for(i=1; i<=n; i++) {
		for(j=i; j<=n; j++) {
			for(m=i; m<=j; m++) {
				if(a[m]==1)
				c--;
				else
				c++;
			}
			if(max<c) max=c;
		    c=g;	 
		}
	}
	printf("%d",max);
}