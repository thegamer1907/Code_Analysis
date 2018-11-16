#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<iomanip>
#define ll long long
using namespace std;
int n, t;
string s[51];
int main (){
	cin>>n>>t;
	cin>>s[0];
	for (int i=0; i<t; i++) {
		s[i+1]=s[i];
		for (int j=1; j<n; j++){
			if (s[i][j]=='G' && s[i][j-1]=='B') {
				s[i+1][j]='B'; s[i+1][j-1]='G';
			}
		}
	}
	cout<<s[t]<<endl;
}
