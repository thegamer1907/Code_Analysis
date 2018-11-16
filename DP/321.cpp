#include <bits/stdc++.h>
using namespace std;
#define LIMIT 1000000

int main(){
	
	int n;
	cin>>n;
	int* a = new int[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int m;
	cin>>m;
	int* b = new int[m];
	for(int i=0;i<m;i++){
		cin>>b[i];
	}
	
	sort(a,a+n);
	sort(b,b+m);
	
	int i=0,j=0;
	int count = 0;
	while(i<n && j<m){
		if(a[i]-b[j]<=1 && a[i]-b[j]>=-1){
			i++;
			j++;
			count++;
		}
		else if( a[i]<b[j]){
			i++;
		}else{
			j++;
		}
	}
	
	cout<<count<<endl;
}
