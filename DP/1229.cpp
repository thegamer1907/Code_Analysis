#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int x[n];
	int zero=0;
	for(int i=0;i<n;i++){
		cin>>x[i];
		if(x[i]==0){
			zero++;
		}
	}
	if(zero==0){
		cout<<n-1;
		exit(0);
	}
	int m=0;
	int lol=0;
	int k=0;
	int p=0;
	int ans=0;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int jvb=0;
			p=0;
			for(int z=i;z<=j;z++){
				if(x[z]==1){
					jvb--;
				}
				else{
					jvb++;
					p++;
				}
			}
			if(jvb>ans){
				ans=jvb;
				lol=p;
				m=i;
				k=j;
			}
		}
	}
	for(int i=0;i<m;i++){
		if(x[i]==1){
			lol++;
		}
	}
	for(int i=k+1;i<n;i++){
		if(x[i]==1){
			lol++;
		}
	}
	cout<<lol;
}
