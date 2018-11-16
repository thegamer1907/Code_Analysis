#include<bits/stdc++.h>

using namespace std;

int n,p[3000],maxi,cam[3000];

void camada(int x){
	if(cam[x]==0 && p[x]>0){
		camada(p[x]-1);
		cam[x]=cam[p[x]-1]+1;
	}
}

int main(){
	cin>>n;
	for(int i=0;i<n;i++) cin>>p[i];
	for(int i=0;i<n;i++){
		camada(i);
		maxi=max(cam[i],maxi);
	}
	cout<<maxi+1<<endl;
	return 0;
}
