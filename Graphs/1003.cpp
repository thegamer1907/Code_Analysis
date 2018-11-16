#include<bits/stdc++.h>
using namespace std;

#define vcii vector<int>
int main(int argc,char** argv){
	int n,d;cin>>n>>d;
	vcii a(n);
	for(int i=1;i<n;i++) cin>>a[i];
	int pos=1;
	while(pos<d)
		pos=pos+a[pos];
	if(pos==d) cout<<"YES";
	else cout<<"NO";
	return 0;
}
