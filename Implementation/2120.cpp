#include<bits/stdc++.h>
using namespace std;

int main() 
{ 
	int n,x[100],y[100],z[100],sumZ = 0,sumY = 0,sumX = 0;
	cin>>n;
	for(int i = 0; i < n; i++) {
		cin>>x[i]>>y[i]>>z[i];
		sumX = sumX + x[i];
		sumY = sumY + y[i];
		sumZ = sumZ + z[i];
	}
	if(sumX == 0 && sumY == 0 && sumZ == 0)
		cout<<"YES";
	else cout<<"NO";
	return 0; 
}

