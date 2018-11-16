#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#define ll long long
using namespace std;
int n,m,a[200],b[200],bo=1,gi=1,s;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	cin>>m;
	for(int i=1;i<=m;i++) cin>>b[i];
	sort(a+1,a+n+1);sort(b+1,b+1+m);
	while(1){
		if(bo>n||gi>m) break;
		if(a[bo]>=b[gi]){
			if(a[bo]-b[gi]<=1){
				s++;
				bo++;gi++;
			}
			else gi++;
		}
		else{
			if(b[gi]-a[bo]<=1){
				s++;
				bo++;gi++;
			}else bo++;
		}
	}
	cout<<s;
	return 0;
}