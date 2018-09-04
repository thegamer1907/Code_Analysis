#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
//#define home
long long m,num[4],pri[4],need[4],ans;
char s[105];
inline bool check(long long x){
	long long t=0;
	for(int i=1;i<=3;i++){
		t+=max(0ll,(x*need[i]-num[i])*pri[i]);
	}
	return t<=m;
}
int main(){
	scanf("%s",s);
	for(int i=0;i<strlen(s);i++){
		if(s[i]=='B') need[1]++;
		if(s[i]=='S') need[2]++;
		if(s[i]=='C') need[3]++;
	}
	for(int i=1;i<=3;i++) cin>>num[i]; 
	for(int i=1;i<=3;i++) cin>>pri[i]; 
	cin>>m;
	long long l=0,r=1e15;
	while(l<r){
		long long mid=(l+r)/2;
		if(check(mid)){
			l=mid+1;
			ans=mid;
		}
		else r=mid;
	}
	cout<<ans<<endl;
	return 0;
}
