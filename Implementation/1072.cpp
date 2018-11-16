#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t;
	cin>>n>>t;
	char a[n],temp;
	for(int i =0; i<n; i++)
	cin>>a[i];
	for(int i =0; i<t; i++){
		for(int j =0; j<n; j++){
			if(a[j] == 'B' && a[j+1] == 'G'){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			    j++;
			}
		}
	}
	for(int i =0; i<n; i++)
	cout<<a[i];
}