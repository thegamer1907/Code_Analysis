#include<bits/stdc++.h>
using namespace std;
int n,m,a[300],b[300];
int main(){
	scanf("%d%d",&n,&m);
	for (int i=1; i<=n; i++) scanf("%d",&a[i]);
	for (int j=1; j<=m; j++) scanf("%d",&b[j]);
	sort(b+1,b+m+1);
	int tot=m;
	for (int i=1; i<=n; i++)
	if (a[i]==0){
		a[i]=b[tot--];
	}
	bool flag=1;
	for (int i=1; i<n; i++)
	if (a[i]>=a[i+1]) flag=0;
	puts(flag?"No":"Yes");
}