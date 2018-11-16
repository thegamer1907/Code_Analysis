#include<iostream>
#include<cstring>
#include<cstdio>
#define maxn 10005
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int ans=0;
	while(n!=m){
		if(m<n||(m&1)) m++;
		else m/=2;
		ans++;
	}
	cout<<ans;
}