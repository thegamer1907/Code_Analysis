#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define N 100010
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int arr[N];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}	
	int ct=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>=arr[k-1] && arr[i]>0)ct++;
	}
	cout<<ct;
}