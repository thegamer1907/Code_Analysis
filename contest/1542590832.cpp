#include <cstdio>
#include <algorithm>
#include <string>
#include <map>
#define N 300005
#define fi(a, b, c) for(int a = (b); a < (c); a++)
#define FI(a, b, c) for(int a = (b); a <= (c); a++)
using namespace std;

int hh, mm, ss, t1, t2;
double h, m, s;

bool out(double s){
	return !(t1 < s && s < t2);
}

int main(){
	scanf("%d %d %d %d %d", &hh, &mm, &ss, &t1, &t2);
	
	hh = hh * 5 % 60;
	t1 = t1 * 5 % 60;
	t2 = t2 * 5 % 60;
	
	h = 0.1 + hh;
	m = 0.1 + mm;
	s = 0.1 + ss;
	
	if(t1 > t2) swap(t1, t2);
	
	if(t1 < h && h < t2 && t1 < m && m < t2 && t1 < s && s < t2 ||
		out(h) && out(m) && out(s))
		puts("YES");
	else
		puts("NO");
}
