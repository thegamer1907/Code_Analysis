#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define pi acos(-1)
#define ll long long
#define F(n) FI(i,n)
#define FI(i,n) FL(i,0,n)
#define FL(i,l,n) for(int i=l;i<n;++i)
#define mod 1000000009

int main(){
	char a[3]; cin >> a;
	int n; cin>>n;
	int f1=0,f2=0;
	F(n){
		char b[3]; cin>>b;
		if(b[0] == a[0] && b[1] == a[1]){
			printf("YES");
			return 0;
		}
		if(b[1] == a[0] ){
			f2 = 1;
		}
		if(b[0] == a[1]){
			f1 = 1;
		}
	}
	if(f1 && f2)printf("YES");
	else printf("NO");
}
