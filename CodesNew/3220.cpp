#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i = 0;i<n;i++)
	cin>>a[i];
	int ma = 0;
	for(int i = 0;i<n;i++)
	ma = max(ma,a[i]);
	int kmax = ma + m;
	int i = 0;
	while(i<n&&m>0){
	    m-= (ma-a[i]);
	    i++;
	}
	int kmin = ma;
	if(m>0){
	    kmin+= (m/n);
	    if(m%n!=0)
	    kmin++;
	}
	cout<<kmin<<" "<<kmax;
	return 0;
}