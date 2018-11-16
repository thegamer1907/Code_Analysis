#include<bits/stdc++.h>
using namespace std;
int getint(){
	int ans=0,f=1;
	char c=getchar();
	while(c>'9'||c<'0'){
		if(c=='-')f=-1;
		c=getchar();
	}
	while(c>='0'&&c<='9'){
		ans=ans*10+c-'0';
		c=getchar();
	}
	return ans*f;
}
#define ll long long
int main(){
	ll w,k,n;
	cin>>k>>n>>w;
	cout<<max(k*w*(w+1)/2-n,0ll);
	return 0;
}
