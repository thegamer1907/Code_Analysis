#include <bits/stdc++.h>

using namespace std; 	
typedef long long ll;
typedef unsigned long long ull;
const int N = 1e5+50;
const int oo = 1e9;

string a[101];
int main(){
	string s;
	cin>>s;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==s){
			puts("YES");
			return 0;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][1]==s[0]&&a[j][0]==s[1]){
				puts("YES");
				return 0;
			}
		}
	}
	puts("NO");
}