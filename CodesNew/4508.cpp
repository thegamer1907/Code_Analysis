/*In The Name of ALLAH*/
#include <bits/stdc++.h>
#define ll long long 
#define MAX 1000011
#define mod 1000000007
#define inf 1000000007
#define sc second
#define fr first
using namespace std;
int n,a[MAX];
bool can(int x){
	int aa[x];
	bool f[x];
	memset(f,0,sizeof f);
	for(int i = 0; i < x ;i++)aa[i] = a[i];
	for(int i = x ; i < n ; i++){
		if(f[i%x])return 0;
		if(a[i] * 2 <= aa[i%x])aa[i%x] = a[i],f[i%x] = 1;
		else return 0;
	}
	return 1;
}
bool cmp(int x,int y){return x > y;}
int main(){ 
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
    cin>>n;
   	for(int i = 0 ; i < n ;i++)cin>>a[i];
   	sort(a,a+n,cmp);
   	int l = 1,h = n;
   	while(h - l > 1){
   		int mid = (h + l)>>1;
   		if(can(mid))h = mid;
   		else l = mid;
   	}
   	if(can(l))cout<<l;
   	else cout<<h;
    return 0;
}