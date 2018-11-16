#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m;
	cin>>n>>m;
	int A[n];
	for(int i=0;i<n;i++)cin>>A[i];
	sort(A,A+n);
//	reverse(A, A+n);
	
	int ct=0;
	for(int i=0;i<n;i++) if(A[i] >= A[n-m] && A[i]>0)ct++;
	
	
	cout<<ct<<"\n";
//	for(auto i:A)cout<<i<<"-";
}
