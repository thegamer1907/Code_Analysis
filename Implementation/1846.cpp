#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// your code goes here
	int n;
	cin>>n;
	ll s=0,d=0,e=0;
	for(int i=0;i<n;i++){
	    int x,y,z;
	    cin>>x>>y>>z;
	    s+=x;
	    d+=y;
	    e+=z;
	}
	if(s || d || e)
	cout<<"NO";
	else cout<<"YES";
	return 0;
}
