/*
	* "Every great developer you know got there by solving problems 
	*  they were unqualified to solve until they actually did it." 
	*  - Patrick McKenzie
*/
#include <bits/stdc++.h>
#include <stdio.h>
#define fo(i,a,n) for(int i=a;i<n;i++)
using namespace std;
#define ll long long int
#define pb push_back
#define fi first
#define se second
#define mod 100000000e
#define Emod 1000000007
#define MAX 10001xxxx
   
int main()
{

	//ios::sync_with_stdio(false);
 /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);	
	 #endif
*/
	int n,m;
	cin>>n>>m;
	int arr[n];
	fo(i,0,n)
		cin>>arr[i];
	sort(arr,arr+n);
	int min=0,max=0;
	max = arr[n-1] + m;
	fo(i,0,n-1)
	{
		int temp = arr[n-1] - arr[i];
		m = m - temp;
	}
	if(m<=0)
		cout<<arr[n-1]<<" "<<max<<endl;
	else
	{
		int temp = m%n;
		if(temp==0)
			temp = 0;
		else 
			temp = 1;
		cout<<arr[n-1] + (m/n) + temp<<" "<<max<<endl;
   }
}
