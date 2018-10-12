#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n,m,kmax,kmin,max=0,sum=0,x[100000];
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>x[i];	
		if(x[i]>max) max=x[i];
		sum+=x[i];
	}
		kmax=max+m;
	bool habis=false;
	if(sum==n*max){
		if(m%n!=0){
			kmin=max+m/n+1;
		}else kmin=max+m/n;
	}else{
		for(int i=0;i<n;i++){
			if(x[i]!=max){
				if(m<(max-x[i])){
					kmin=max;
					habis=true;
					break;
				}
				m-=max-x[i];
			}
		}
		if(!habis){
			if(m%n!=0) kmin=max+m/n+1;
			else kmin=max+m/n;
		}
	}

	cout<<kmin<<" "<<kmax<<endl;
	return 0;
}