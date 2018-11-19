#include <bits/stdc++.h>
using namespace std;
int i,j,k,n,m,x,y,t,a[5],b[5],s;
int Map[100000];
int main(){
	scanf("%d%d",&n,&m);
	while (n--){
		s=0;for (j=1;j<=m;j++){scanf("%d",&a[j]);b[j]=1-a[j];s+=a[j]*(1<<j-1);}Map[s]++;
		for (int P=0;P<(1<<m);P++){
			x=P;t=m;
			while (t){if (x&1&&a[t]==0)b[t]=0;x>>=1;t--;}
			s=0;for (k=1;k<=m;k++)s+=b[k]*(1<<k-1),b[k]=1-a[k];
			if (Map[s]){printf("YES\n");return 0;}
		}
	}
	printf("NO\n");
	return 0;
}
