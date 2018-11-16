#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main(){
	int n , k;
	cin>>n>>k;
	vector <int> vect(n+1);
	for(int i=1; i<n;i++){
		cin>>vect[i];
	}
	int cur = 1 ;
	while(cur<n && cur!=k){
		cur = cur +vect[cur];
	}
	if(cur==k){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
}