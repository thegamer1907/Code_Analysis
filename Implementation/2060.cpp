#include <bits/stdc++.h>
using namespace std;

int main() {
	int x=0,y=0,z=0;
	int n;
	cin>>n;
	while(n--) {
		int a,b,c;
		cin>>a>>b>>c;
		x+=a;
		y+=b;
		z+=c;
	}
	cout<<(x==0 && y==0 && z==0?"YES":"NO")<<endl;
}