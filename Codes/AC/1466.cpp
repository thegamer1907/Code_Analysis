#include <bits/stdc++.h>
using namespace std;
pair<int,int> lst[100000];
int sum=0,item=0;
int ok=0;
int d;
int n,s;
int L,R;
bool cmp(pair<int,int>a,pair<int,int>b) {
	return a.first+a.second*d<b.first+b.second*d;
}
void dps(int tol,int money) {
	d=tol;
	sort(lst+1,lst+n+1,cmp);
	if(ok)return;
	int tp=0;
	for(int i=1; i<=tol; i++) {
		tp+=lst[i].first+lst[i].second*tol;
		if(tp>money)break;
	}
	if(tp>money) {
		if(tol==L||tol==R)return;
		R=tol;
		if(L==tol-1)dps(L,money);
		else dps((L+tol)/2,money);
	}
	if(tp<=money) {
		if((item<tol)||(item==tol&&tp<=sum)) {
			sum=tp;
			item=tol;
			if(tol==L||tol==R)return;
			L=tol;
		}
		if(R==tol+1)dps(R,money);
		else dps((R+tol)/2,money);
	}
}
int main() {
	cin>>n>>s;
	for(int i=1; i<=n; i++) {
		scanf("%d",&lst[i].first);
		lst[i].second=i;
	}
	L=0;
	R=n;
	dps((n+1)/2,s);
	cout<<item<<' '<<sum<<endl;
	return 0;
}