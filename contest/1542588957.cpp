#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int n,i,k[100000],m,p;
string s,s1;
main(){
	cin>>s>>n;
	for (i=0; i<n; i++){
		cin>>s1;
		if (s1==s ) { cout<<"YES"; return 0; }
		if (s1[1]==s[0]) p++;
		if (s1[0]==s[1]) m++;
	}
	if (p && m ) cout<<"YES"; else cout<<"NO";
}