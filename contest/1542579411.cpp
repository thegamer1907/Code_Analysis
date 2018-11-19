#include <bits/stdc++.h>

using namespace std;

#define repp(i,a,b) for(int i = (int)(a) ; i < (int)(b) ; ++i)
#define repm(i,a,b) for(int i = (int)(a) ; i > (int)(b) ; --i)

int h,m,s,t1,t2;

int halt(){
	cout << "YES" << endl;
	return 0;
}

int main(){
	cin >> h >> m >> s >> t1 >> t2;
	if(h == 12) h = 0;
	if(t1 == 12) t1 = 0;
	if(t2 == 12) t2 = 0;
	m /= 5;
	s /= 5;
	int x = t1;
	while(x != h && x != m && x != s){
		x = (x+1) % 12;
		if(x == t2) return halt();
	}
	x = t2;
	while(x != h && x != m && x != s){
		x = (x+1) % 12;
		if(x == t1) return halt();
	}
	cout << "NO" << endl;
	return 0;
}
