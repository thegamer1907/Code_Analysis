#include<bits/stdc++.h>
using namespace std;

#define lli long long int

lli fun(lli k){
	if((k & (k-1))==0){
		int ct=0;
		while(k){
			ct++;
			k/=2;
		}
		return ct;
	}
	lli abc=1;
	while((abc<<1)<k){
		abc<<=1;
	}
	lli diff=k-abc;
	return fun(abc-diff);
}

int main(){
	lli n,k;
	cin>>n>>k;
//	for(int i=1;1<16;i++)
	cout<<fun(k)<<endl;
	return 0;
}
