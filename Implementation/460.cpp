#include<iostream>
using namespace std;
int main(){
	int k,n;
	int m=0;
	cin>>n>>k;
	int b[n-1];
	for(int i=0;i!=n;i++){
		cin>>b[i];
	}
	for(int i=0;i!=n;i++){
		if(b[i]>=b[k-1] && b[i]>0) m++;
	}
	cout<<'\n'<<m;
	return 0;
}
