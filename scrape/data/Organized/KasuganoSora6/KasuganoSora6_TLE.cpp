#include<bits/stdc++.h>
using namespace std;
const int maxm=1e5+13;
long long a[maxm];
int main(){
	long long n; long long m,k; cin>>n>>m>>k;
	for(int i=1;i<=m;i++) scanf("%d",&a[i]);
	long long dsy=0,dis=0,pos=1,nk=k;
	while(dis<m){
		if(a[pos]-dis>nk){nk+=k;} else{
		long long tp=pos; while(a[tp]-dis<=nk&&tp<m) tp++;
		if(a[tp]-dis>nk&&tp>pos) tp--;
		dsy++;
		dis=dis+tp-pos+1;
		pos=tp+1;	
	}}
	cout<<dsy<<endl;
	return 0;
}