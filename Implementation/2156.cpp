#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int sx=0,sy=0,sz=0;
	while(n--){
		int a,b,c;
		cin >> a >> b >> c;
		sx+=a;
		sy+=b;
		sz+=c;
	}
	if(sz==0 && sy==0 && sx==0)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}