#include <bits/stdc++.h>
using namespace std;

int main(){
	int h,m,s,t1,t2;
	cin >> h >> m >> s >> t1 >> t2;
	t1*=5;
	t2*=5;
	h*=5;
	bool f=true;
	h%=60,t1%=60,t2%=60;
	if(t1>t2) swap(t1,t2);
	if(h>=t1 && h<t2) f=false;
	if(m>=t1 && m<t2) f=false;
	if(s>t1 && s<t2) f=false;
	if(f){
		cout << "YES\n";
		return 0;
	}
	f=true;
	if(h>=t2 || h<t1) f=false;
	if(m>=t2 || m<t1) f=false;
	if(s>t2 || s<t1) f=false;
	if(f){
		cout << "YES\n";
	}
	else cout << "NO\n";

	return 0;
}