#include <bits/stdc++.h>
using namespace std;
const int  N = 1e5 + 20 ;
int a[N],dp[N];
int main(){
	int n;
	int t;
	cin >> n >> t;
	string s;
	cin >> s;
	for (int i=0;i<t;i++){
		for (int j=0;j<n-1;j++){
			if (s[j]=='B' and s[j+1]=='G'){
				
				swap(s[j],s[j+1]);
				j++;
			}

		}
	}
	for (int i=0;i<n;i++){
		cout << s[i];
	}
	return 0;
}
