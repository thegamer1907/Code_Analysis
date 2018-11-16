#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k,t=240;
	cin>>n>>k;
	t-=k;
	int i=1;
	while(t>=0){
		if(i==n+1){
			cout<<n;
			return 0;
		}
		t-=i*5;
		i++;
	}
	cout<<i-2;
}