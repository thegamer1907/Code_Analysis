#include <bits/stdc++.h>
#define ll long long
using namespace std;
main(){
	int n, k, i=0, s=0;
	cin>>n>>k;
	int a[n];
	while(i<n){
		cin>>a[i];
		if(i==k-1){
			int j=k;
			while(j--){
				if(a[j]>=a[k-1]&&a[j]!=0) s++;
			}
		}
		if(i>k-1&&a[i]==a[k-1]&&a[i]!=0) s++;
		i++;
	}
	cout<<s;
}