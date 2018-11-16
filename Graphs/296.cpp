#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,t;
	cin >> n >> t;
	string s;
	cin >> s;
	for(int i=0; i<t; i++){
		for(int j=0; j<n;){
			if(s[j]=='B' && s[j+1]=='G'){
				swap(s[j],s[j+1]);
				j += 2;
			}
			else {
				  j++;
			}
		}
	}
	cout << s << endl;
	return 0;
}