#include<bits/stdc++.h>
using namespace std;
int i, m, j, a[100001], b;
string s;
int main(){
	cin>>s;
	for(i=1; i<s.size(); ++i)
	a[i]=a[i-1]+(s[i]==s[i-1]);
	cin>>m;
	while(m>0){
	cin>>j>>b;
	cout<<a[b-1]-a[j-1]<<" ";
	m--;
}
	return 0;
}