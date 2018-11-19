#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define f first
#define s second

typedef long long int ll;

int main(){
	char x,y,a,b;
	cin>>x>>y;
	int n;
	cin>>n;
	int fx=0,fy=0;
	while(n--){
		cin>>a>>b;
		if(x==a && y==b){
			cout<<"YES";
			return 0;
		}
		if(!fx && b==x) fx=1;
		if(!fy && a==y) fy=1;
	}
	if(fx && fy) cout<<"YES";
	else cout<<"NO";
	return 0;
}