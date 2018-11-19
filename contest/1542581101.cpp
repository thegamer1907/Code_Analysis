#include <bits/stdc++.h>
using namespace std;
const int N=1e5+50;
int n,k,a[N],c[1<<4],suc;
int main(int argc,char *argv[]){
	int i,j,v;
	cin>>n>>k;
	for(i=0;i<n;++i){
		for(j=0;j<k;++j){
			cin>>v;
			a[i]|=v<<j;
		}
		++c[a[i]];
	}
	if(c[0])suc=1;
	for(i=0;i<(1<<4);++i)for(j=i+1;j<(1<<4);++j)
		if(c[i]&&c[j]&&((i&j)==0))suc=1;
	printf("%s\n",suc?"YES":"NO");
	return 0;
}
