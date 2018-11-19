#include <stdio.h>
double hh, mm, ss;
int h, m, s, t1, t2;
void swap(int &a, int &b){
	int tmp = a;
	a = b;
	b = tmp;
}
bool inter(double s, double m, double e){
	if (s <= m&&m <= e) return true;
	return false;
}
bool go(){
	//bool res = false;
	int cnt = 0;
	if (inter(t1, ss, t2)) cnt++;
	if (inter(t1, hh, t2)) cnt++;
	if (inter(t1, mm, t2)) cnt++;
	if (cnt > 0) return false;
	return true;

	
}

int main(){
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	if (h == 12) h = 0;
	if (t1 == 12) t1 = 0;
	if (t2 == 12) t2 = 0;
	ss = s/5.f;
	mm = m/5.f + ss / 60.f;
	hh = h + mm / 60.f;
	if (t2 < t1) swap(t1, t2);
	//printf("\n%d %f %f %f %d\n", t1, hh, mm, ss, t2);
	bool res = false;
	res |= go();
	if (t1 >= ss) ss += 12;
	if (t1 >= hh) hh += 12;
	if (t1 >= mm) mm += 12;
	t1 += 12;
	swap(t1, t2);
	res |= go();
	if (res) printf("YES");
	else printf("NO");

	return 0;
}