#include<bits/stdc++.h>
using namespace std;
main(){
	string a;
	int b,c,n,i,k,m,j;
	cin>>b>>c>>a;
	while(c>0){
	for(i=0; i<a.size(); i++){
		
		if(a[i]=='B' && a[i+1]=='G') {
			swap(a[i], a[i+1]);  i++;
		}
	}c--;
	}
	cout<<a;
	
}