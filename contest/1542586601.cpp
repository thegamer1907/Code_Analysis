#include <bits/stdc++.h>
using namespace std;
#define lld long long int

int main()
{
	lld n,i=0;
	char a[2],a1,a2;
	cin >> a[0]>>a[1];
	cin >> n;
	lld flag1=0,flag2=0;
	while(n-- && (flag1!=1 || flag2!=1)){
		cin >> a1 >> a2;
		if(a1==a[0]&& a2==a[1]){
			flag1=1;
			flag2=1;
			break;
		}

		if(a1 ==a[1]){
			flag2=1;
		}
		if(a2 ==a[0]){
			flag1=1;
		}
	}
	if(flag1==1&&flag2==1) cout << "YES";
	else cout << "NO";
	return 0;
}