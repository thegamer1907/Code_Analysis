#include <bits/stdc++.h>

using namespace std;
int main(int argc, char** argv) {
	int n;
	int m=0;
	cin>>n;
	cin>>m;
	int a[n];
	int min=1000,max=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if (a[i]<min){
			min=a[i];
		}
		if(a[i]>max){
			max=a[i];
		}
	}
	int e=0;
	for(int i=0;i<n;i++){
		e=e+max-a[i];
	}
	if (e>=m){
		cout <<max;
		cout <<" ";
		cout<<max+m;
	}
	else{
		int c=max;
		e=m-e;
		while (e>0){
			c++;
			e=e-n;
		}
		cout <<c<<" "<<max+m;
	}
}
