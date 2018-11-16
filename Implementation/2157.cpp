#include <bits/stdc++.h>
using namespace std;
int main() {
    int i,j,k,n;
    cin>>n;
    int a[n][3];
    for(i=0;i<n;i++){
    	for(j=0;j<3;j++)
    	cin>>a[i][j];
	}
	k=0;
	int l=0;
	int m=0;
	for(i=0;i<n;i++){
		k=k+a[i][0];
		l=l+a[i][1];
		m=m+a[i][2];
	
	}
	if(k==0&&l==0&&m==0)
	cout<<"YES";
    else
    cout<<"NO";
	return 0;
	}
	