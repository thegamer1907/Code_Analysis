#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define all(v) v.begin(),v.end()
#define Max 1000001
using namespace std;
int main(){
	ll k, n, w;
	cin>>k>>n>>w;
	ll total = (w*(w+1))/2;
	total = total *k;
	if(n>=total){
		cout<<0;
	}
	else{
		cout<<total-n;
	}
}