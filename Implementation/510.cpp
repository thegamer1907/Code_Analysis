#include <bits/stdc++.h>

using namespace std;

int a[105];

int main(){
	int n,k;
	cin >> n >> k;
	for(int i=0;i<n;i++)
		cin >> a[i];
	sort(a,a+n,greater<int>());
	int ind=k-1;
	if(a[ind]>0)
		while(a[++ind]==a[k-1]);
	else{
		while(--ind>=0 and a[ind]==0);
		ind++;
	}
	cout << ind;

}