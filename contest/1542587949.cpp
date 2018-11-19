#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string a,st[111];
int main() {
	ios::sync_with_stdio(false);
	 cin>>a;
	 int n;
	 cin>>n;
	 for(int i = 0; i < n; i++) {
	 	cin>>st[i];
	 }
	 int flag = 0,f1=0,f2=0;
	 for(int i = 0; i < n; i++) {
	 	if(a.find(st[i])!=string::npos) {
	 		flag = 1;
	 		break;
	 	}
	 	if(st[i][1] == a[0]) {
	 		f1=1;
	 	}
	 	if(st[i][0] == a[1]) {
	 		f2=1;
	 	}
	 	if(f1&&f2) {
	 		flag = 1;
	 		break;
	 	}
	 }
	// cout<<f1<<f2<<endl;
	 if(flag) cout<<"YES"<<endl;
	 else cout<<"NO"<<endl;
	 return 0;
}