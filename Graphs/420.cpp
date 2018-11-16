#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define fi first
#define se second
#define mod 998244353
#define ld long double


int main()
{
	int n,t;
	cin >>n>>t;
    char a[n];
    for(int i=0;i<n;i++){
		cin >> a[i];
		
	}
	for(int j=0;j<t;j++){
	for(int i=0;i<n-1;i++){
		if(a[i]=='B'&&a[i+1]=='G'){
			a[i+1] ='B';
			a[i] = 'G';
			i++; 
		}
		
	}
	}
	for(int i=0;i<n;i++){
		cout <<a[i];
		
	}
	return 0;
}