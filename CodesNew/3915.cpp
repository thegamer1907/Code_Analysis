#include<iostream>
#include<cstdio>
#define maxn 100005
#define LL long long
using namespace std;
int n;
LL a[maxn],maxx;
bool isOK(LL x){
	LL cnt=0;
	for(int i=1;i<=n;i++){
		if(x>a[i]) cnt+=x-a[i];
		if(cnt>=x) return 1;
	}
	if(cnt>=x) return 1;
	else return 0;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxx=max(maxx,a[i]);
	}
	LL l=maxx,r=(LL)1e16;
	while(r-l>3){
		LL mid=(l+r)/2;
		if(isOK(mid)) r=mid;
		else l=mid;
	} 
//	cout<<l<<" "<<r<<endl;
	for(LL i=l;i<=r;i++){
		if(isOK(i)){
			cout<<i;
			break;
		}
	}
	return 0;
} 