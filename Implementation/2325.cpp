#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define all(v) v.begin(),v.end()
#define Max 1000001
using namespace std;
int main(){
	int n ;
	cin>>n;
	string s;
	cin>>s;
	int cnt =0;
	for(int i=0; i<n-1;i++){
		if(s[i]==s[i+1]){
			cnt++;
		}
	}
	cout<<cnt<<endl;
}