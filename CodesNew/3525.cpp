#include<bits/stdc++.h>
#include <cstdio>
#include<iostream>
using namespace std;
int main()
{
	int n,m,ml=0; cin>>n>>m;
	int arr[n],k=m;
	for(int i=0;i<n;i++){
        cin>>arr[i];
        ml=max(ml,arr[i]);
	}
	for(int i=0;i<n;i++){
       m-=min(m,ml-arr[i]);
	}
	m=ceil(1.0*m/n);
	if(m==0) cout<<ml;
	else cout<<ml+m;
	cout<<" "<<ml+k;
}
