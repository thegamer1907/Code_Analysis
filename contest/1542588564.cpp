#include <bits/stdc++.h>

int h, m, s, t1, t2;

int main(){
	scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
	double hh, mm, ss;
	ss = s;
	mm = m + ss / 60;
	hh = h + mm / 60;
	hh *= 5;
	t1 *= 5;
	t2 *= 5;
	if(hh >= 60) hh -= 60;
	if(mm >= 60) mm -= 60;
	if(ss >= 60) ss -= 60;
	if(t1 >= 60) t1 -= 60;
	if(t2 >= 60) t2 -= 60;
	if(t1 < t2) std::swap(t1, t2);
	bool flag = false;
	if(!(t2 < ss && ss < t1 || t2 < mm && mm < t1 || t2 < hh && hh < t1)) flag = true;
	if(!(t2 > ss || ss > t1 || t2 > mm || mm > t1 || t2 > hh || hh > t1)) flag = true;
	puts(flag ? "YES" : "NO");
	return 0;
}