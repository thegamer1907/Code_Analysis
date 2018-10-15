#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n], m[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		m[i] = 0;	
	} 

	sort(a, a+n);
	int p2 = n/2 + n%2;
	int p1 = 0;
	int s = 0;
	while(p2 < n){
		if(a[p1]*2 <= a[p2]){
			s++;
			p1++;
			p2++;
		}else{
			p2++;
		}
	}
	cout<<n-s<<endl;
	return 0;
}
