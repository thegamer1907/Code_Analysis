#include <bits/stdc++.h>
using namespace std;
const int N=1e5+7;
#define ll long long
int a[N],b[N];
int n;
int mn=1e9+2,mnn;
int main(){
	scanf("%d",&n);
	for(int i = 1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i = 1;i<=n;i++){
		b[i]=(a[i]+n-i)/n;
		if(b[i]<mn){
			mn=b[i];
			mnn=i;
		}
	}
	printf("%d\n",mnn);
}