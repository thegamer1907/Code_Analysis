#include<bits/stdc++.h>
using namespace std;
#define repl(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) for(int i=0;i<a;i++)
#define mp make_pair
#define ll long long int
#define ld long double
#define pb push_back
#define mod 1000000007
int main(){
	int n ;cin>>n;
	int prefix[n];
	int arr[n];
	int cnt=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]==0) arr[i]=-1;
		else cnt++;
	}
	prefix[0]=arr[0];
	for(int i=1;i<n;i++){
		prefix[i]=arr[i]+prefix[i-1];
	}	
	int sum=INT_MAX;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			sum=min(sum,prefix[j]-(i-1>=0?prefix[i-1]:0));
		}
	}

	cnt-=sum;
	cout<<cnt<<endl;

	return 0;
}