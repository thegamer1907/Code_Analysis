#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(0)
const int mod= 1e9 + 7;
#define Maxm 1000005
#define endl '\n'
#define pb push_back
#define mp make_pair
#define sz(x) ((int)(x).size())
#define ff first
#define ss second
#define pii pair<int,int>
#define vi vector<int>

int main() {
	fastio;
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	int mx=*max_element(a,a+n);

	int maxans=mx+k;
	sort(a,a+n);
	int p=0;
	for(int i=0;i<n;i++){
		p+=mx-a[i];
		if(p>=k)
			break;
	}
	int minans=0;
	if(p<k){
		int add=k-p;
		minans+=add/n;
		if(add%n!=0){
			minans+=1;
		}
	}

	minans+=mx;

	cout<<minans<<" "<<maxans<<endl;
	return 0;
}