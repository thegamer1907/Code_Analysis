#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define all(v) v.begin(),v.end()
#define Max 1000001
using namespace std;
int main(){
	int n , t;
	cin>>n>>t;
	string s;
	cin>>s;
	for(int i=0; i<t;i++){
		for(int i=0; i<n-1;i++){
			if(s[i]=='B' && s[i+1]=='G'){
				s[i+1]='B';
				s[i]='G';
				i++;
			}
		}
	}
	cout<<s;
}