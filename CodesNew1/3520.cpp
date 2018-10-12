#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,a,sum=0,max_=0;
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		sum+=a;
		max_=(a>max_)?a:max_;
	}
	printf("%d %d",max(max_,(sum+m+n-1)/n),max_+m);
}