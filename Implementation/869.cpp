#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// your code goes here
	int n,a;
	cin>>n>>a;
	string s;
	cin>>s;
	int c=0;
	while(a--){
	for(int i=0;i<n-1;i++){
	    if(s[i]=='B' && s[i+1]=='G')
	    swap(s[i],s[i+1]),i+=1;
	}
	}
	cout<<s;
	return 0;
}
