#include <iostream>
#include <queue>
#include <set>
#include <vector>
#include <map>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

#define forsn(i,s,n) for(int i = (int)(s);i < (int)(n);i++)
#define forn(i,n) forsn(i,0,n)
#define dforsn(i,s,n) for(int i = (int)((n)-1);i >= (int)(s);i--)
#define dforn(i,n) dforsn(i,0,n)
#define F first
#define S second

typedef long long int tint;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int h,m,s,t1,t2; cin >> h>> m >> s>>t1 >>t2;
	h*=60*60; h+=m*60; h+=s;
	t1*=60*60;
	t2*=60*60;
	m*=60*12; m+=s;
	s*=60*12;
	
	int agujas[] = {h,m,s};
	sort(agujas, agujas + 3);
	int pt1 = 0; while(pt1 < 2 && t1 > agujas[pt1 + 1]) pt1++;
	if (pt1 == 0 && t1 < agujas[0]) pt1 = 2;
	int pt2 = 0; while(pt2 < 2 && t2 > agujas[pt2 + 1]) pt2++;
	if (pt2 == 0 && t2 < agujas[0]) pt2 = 2;
	
	//~ cout << agujas[0] << ' ' << agujas[1] << ' ' << agujas[2] << ' ' << t1 << ' ' << t2 << endl;
	//~ cout << pt1 << ' ' << pt2 << endl;
	cout << (pt1 == pt2? "YES": "NO") << endl;
}


