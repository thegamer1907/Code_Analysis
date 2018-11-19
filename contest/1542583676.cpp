#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int h, m, s;
int a, b;
double de[3], da, db;

bool bettwen(double d1, double d2, int flag) {
	if(flag == 0) {
		if(d1 < da && db < d2)  return true;
		else  return false;
	}else {
		if(da < d1 && db < d1) return true;
		if(da > d2 && db > d2) return true;
		if(da < d1 && db > d2) return true;
		return false;
	}
}

int main() {
	scanf("%d%d%d%d%d", &h, &m, &s, &a, &b);
	while(h >= 12) h -= 12;
	de[0] = (h*60*60+m*60+s)*1./(12*60*60);
	de[1] = (m*60+s)*1./(60*60);
	de[2] = s*1./60;
	da = a*1./12;
	db = b*1./12;	
	if(da > db) swap(da, db);
	sort(de, de+3);
	
	bool ok = false;
	if(bettwen(de[0], de[1], 0) || bettwen(de[1], de[2], 0) || bettwen(de[0], de[2], 1))
		ok = true; 
	
	if(ok) printf("YES");
	else printf("NO");
	
	return 0;
}

