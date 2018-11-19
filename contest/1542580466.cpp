#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

int n,k;
bool vis[16],ok=false;

int main(){
	int a,ans;
	cin>>n>>k;
	for (int i=1;i<=n;i++){
		ans=0;
		for (int p=k-1;p>=0;p--){
			cin>>a;
			ans+=a*(1<<p);
		}
		if (ans==0){
			printf("YES");
			return 0;
		}
		for (int j=0;j<16;j++){
			if (vis[j]){
				if ((ans&j)==0){
					ok=true;
					break;
				}
			}
		}
		if (ok) break;
		vis[ans]=true;
	}
	if (ok){
		printf("YES");
	} else {
		printf("NO");
	}
	return 0;
}