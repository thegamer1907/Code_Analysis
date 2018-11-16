#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int main(){
   	int n,m,i;
	scanf("%d %d",&n,&m);
	for(i=0;i<n-1;i++)
		scanf("%d",&a[i]);
	m--;i=0;
	while(i<m)  i+=a[i];
	if(i==m)  cout<<"YES\n";
	else cout<<"NO\n";
	return 0;
}
