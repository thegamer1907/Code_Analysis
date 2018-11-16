#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i,l=0,a[n];
	for(i=1;i<n;i++){
		scanf("%d",&a[i]);
	}
	i=1;
	while(i<m){
		i+=a[i];
	}
	printf("%s",i==m?"YES":"NO");
}