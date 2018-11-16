#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,cnt=0;
	cin>>n;
	long long int a[n];
	for(long long int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	long long int m;
	cin>>m;
	long long int b[m];
	for(long long int i=0;i<m;i++){
		cin>>b[i];
	}
	static bool c[102];
	sort(b,b+m);
	for(long long int i=0;i<n;i++){
		for(long long int j=0;j<m;j++){
			if(abs((a[i]-b[j]))<=1&&c[j]==0){
				c[j]=1;
				cnt++;
				break;
			}
		}
		
	}
	cout<<cnt;
	
}


