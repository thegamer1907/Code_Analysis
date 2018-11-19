#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define se second
#define fi first
#define pb push_back

string st[105];

int main(){

//	freopen("in.txt","r",stdin);

	int h,m,s,t1,t2;
	cin >> h >> m >> s >> t1 >> t2;
	int a=-1,b=-1,c=-1,d=-1,e=-1,f=-1,eq1=-1,eq2=-1,eq3=-1;
	if(m + s != 0){
		a=h, b=h + 1;
		if(b == 13) b=1;
	}
	else{
		eq1=h;
	}
	if(m % 5 == 0 && !s){
		eq2=m / 5;
		if(eq2 == 0) eq2=12;
	}
	else{
		c=m / 5;
		if(c == 0) c=12;
		d=c + 1;
		if(d == 13) d=1;
	}
	if(s % 5 == 0){
		eq3=s / 5;
		if(eq3 == 0) eq3=12;
	}
	else{
		e=s / 5;
		if(e == 0) e=12;
		f=e + 1;
		if(f == 13) f=1;
	}
//	cout << a << " " << b << " " << c << " " << d << "  " << e << " " << f
//		<< endl;
	bool ff=0;
	int p=-1;
	for(int i=t1;;i++){
		i=i % 12;
		if(i == 0) i=12;
		if(i == eq1 || i == eq2 || i == eq3) break;
		if((i == a && p == b) || (i == b && p == a)) break;
		if((i == c && p == d) || (i == d && p == c)) break;
		if((i == e && p == f) || (i == f && p == e)) break;
		if(i == t2){
			ff=1;
			break;
		}
		p=i;
	}
	p=-1;
	for(int i=t1;;i--){
		i=i % 12;
		if(i == 0) i=12;
		if(i == eq1 || i == eq2 || i== eq3) break;
		if((i == a && p == b) || (i == b && p == a)) break;
		if((i == c && p == d) || (i == d && p == c)) break;
		if((i == e && p == f) || (i == f && p == e)) break;
		if(i == t2){
			ff=1;
			break;
		}
		p=i;
	}
	if(ff) puts("YES");
	else puts("NO");
}
