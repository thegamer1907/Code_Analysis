#include <iostream>
#include <set>
using namespace std;
int a,b,d;
string k;
set <string> s1;
main(){
	cin>>a>>b;
	d=a+b;
	for (int i=0; i<d; i++) {
		cin>>k;
		s1.insert(k);
	}
	d=a+b-s1.size();
	if (d%2!=0) b--;
	if (a>b) cout<<"YES"; else cout<<"NO";
}