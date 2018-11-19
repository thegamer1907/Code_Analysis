#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main(){
	//freopen("input.txt", "r", stdin);
	double h, m, s, t1, t2, ph, pm, ps, pt1, pt2;
	scanf("%lf%lf%lf%lf%lf", &h, &m, &s, &t1, &t2);
	if(t1 < t2){
		double temp = t1;
		t1 = t2;
		t2 = temp;
	}
	int flag[2];
	flag[0] = 1;
	flag[1] = 1;
	h = (int)h % 12;
	ps = s / 60.0;
	pm = (m + ps) / 60.0;
	ph = ((h + pm) / 12.0);
	t1 = t1 / 12.0;
	t2 = t2 / 12.0;
	//printf("%lf %lf %lf %lf %lf\n", h, m ,s, t1, t2);
	if(ps - t2 > 0 && ps - t1 < 0) flag[0] = 0;
	if(pm - t2 > 0 && pm - t1 < 0) flag[0] = 0;
	if(ph - t2 > 0 && ph - t1 < 0) flag[0] = 0;
	if(ps - t2 < 0 || ps - t1 > 0) flag[1] = 0;
	if(pm - t2 < 0 || pm - t1 > 0) flag[1] = 0;
	if(ph - t2 < 0 || ph - t1 > 0) flag[1] = 0;
	//cout << flag[0] << " "<< flag[1] << endl;
	//printf("%lf %lf %lf\n", ph, pm, ps);
	if(!flag[1] && !flag[0]) puts("NO");
	else puts("YES");
	return 0;
}