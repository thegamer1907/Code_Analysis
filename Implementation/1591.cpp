#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// your code goes here
	string s;
	cin>>s;
	int c0=0,c1=0;
	for(int i=0;i<s.size();i++){
	    if(s[i]=='0'){
	        c0++;
	        c1=0;
	    }
	    else if(s[i]=='1'){
	        c1++;
	        c0=0;
	    }
	    if(c1==7 || c0==7){
	        cout<<"YES";
	        return 0;
	    }
	}
	cout<<"NO";
	return 0;
}
