#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int MAX=1e6+9;
int main(){
	int b[5] ,a[MAX]={0} ,i ,j ,n ,m,k;
	cin>>n>>k;
	for(i=0;i<n;i++){
		int tot=0;
		for(j=0;j<k;j++){
			cin>>m;
			int p=(1<<j);
			tot=tot+p*m;
		}
		a[tot++]++;
	}
	for(i=0;i<=(1<<k);i++){
		for(j=0;j<=(1<<k);j++){
			if(!(i&j)&&a[i]&&a[j]){
				cout<<"YES";
				return 0;
			}
		}

	}
	cout<<"NO";
	return 0;
}