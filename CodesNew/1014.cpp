#include <iostream>
#include <set>
using namespace std;
int a,b,c,d,f,i;
set <string> s;
string s1;
main (){
	cin>>a;
	cin>>b;
	for (i=0;i<a;i++){
		cin>>s1;
		s.insert(s1);
	}
	for (i=0;i<b;i++){
		cin>>s1;
		s.insert(s1);
	}
	f=(a+b)-s.size();
	if (a>b) {cout<<"YES"; return 0;} 
	if (a<b) {cout<<"NO"; return 0;}	
	if (f%2==0) cout<<"NO"; else cout<<"YES";
}