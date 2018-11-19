#include<bits/stdc++.h>
using namespace std;
string a,b;
int l,r,n;

int main(){
	cin >> a >> n;
	
	for (int i=1; i<=n; i++){
		cin >> b;
		if (b==a){printf("YES"); return 0;}
		if (b[0]==a[1]) r=1;
		if (b[1]==a[0]) l=1;
		if (l && r){printf("YES"); return 0;}
	}
	
	printf("NO");
}
