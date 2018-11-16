#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n], acopy[n];
	
	for(int i = 0; i < n; i++){
	
		cin>>a[i];
		acopy[i] = a[i];
		}
	int mx = -1;
	int cnt = 0;
	for(int i = 0; i < n; i++){
		for(int kk = 0; kk<n;kk++)
			acopy[kk] = a[kk];
		for(int j = i; j < n; j++){
			acopy[j] = 1 - a[j];
			cnt = 0;
			for(int k = 0; k < n; k++){
				if(acopy[k] == 1)
					cnt++;
				if(cnt > mx)
					mx = cnt;
			}
		}
	}
	cout<<mx<<endl;
	
}