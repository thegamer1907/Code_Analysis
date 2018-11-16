#include<bits/stdc++.h>
using namespace std;
int a[101],n,x,t=0;
int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++)scanf("%d",&x),a[i]=a[i-1]+(x==1?-1:1),t+=x==1?1:0;
	x=-1;
	for(int i=1;i<=n;i++){
		for(int j=0;j<i;j++){
			x=max(x,a[i]-a[j]);	
		}
	}
	cout<<t+x;
}//