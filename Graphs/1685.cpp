#include<bits/stdc++.h>
using namespace std;
int a[120000],to,n;
int main() {
	cin>>n>>to;
	for(int i=1;i<=n-1;i++) cin>>a[i];
	int at=1;
	while(at<=n) {
		// cout<<"at="<<at<<endl;
		if(at==to) {puts("YES");return 0;}
		if(at>=n) break;
		at+=a[at];
	}
	puts("NO");
	return 0;
}