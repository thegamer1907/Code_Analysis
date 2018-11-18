#include <iostream>
using namespace std;
int n, v0, v1;
string a, b;
int main() {
	cin>>a>>n;
	while(n--) {
		cin>>b;
		if(b==a) v0 = v1 = 1;
		if(b[1]==a[0]) v0 = 1;
		if(b[0]==a[1]) v1 = 1;
	}
	cout<<(v0&&v1 ? "YES" : "NO");
	return 0;
}