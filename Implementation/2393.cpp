#include<bits/stdc++.h>
using namespace std;
int main() {
	int a,b;
	cin>>a>>b;
	int time=240;
	time-=b;
	int ans=0,tot=0;
	while(ans+(tot+1)*5<=time) {
		tot++;
		ans+=tot*5;
	}
	cout<<min(a,tot);
	return 0;
}