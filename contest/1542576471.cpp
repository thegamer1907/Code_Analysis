#include "bits/stdc++.h"
using namespace std;
const double pc = 1e-3;
double arct2, arct1, t;
bool judge(double h, double m, double s) {
	bool flag1 = true, flag2 = true;
	if (h>arct1&&h<arct2||m>arct1&&m<arct2||s>=arct1&&s<=arct2) flag1 = false;
	if (h<arct1&&h>0||m<arct1&&m>0||s<arct1&&s>=0) flag2 = false;
	if (h>arct2&&h<360||m>arct2&&m<360||s>arct2&&s<=360) flag2 = false;
	// printf("%d %d\n", flag1, flag2);
	return flag1||flag2;
}
int main(int argc, char const *argv[])
{
	int h, m, s, t1, t2;
	scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
	if (h == 12) h = 0;
	arct1 = t1*360/12;
	arct2 = t2*360/12;
	double arcs = s*360/60;
	double arcm = ((double)m + (double)s/60)*360.0/60;
	double arch = ((double)h + (double)s/60)*360.0/12;
	if (arct1 > arct2) { t = arct1; arct1 = arct2; arct2 = t;}
	if (judge(arch, arcm, arcs)) printf("YES\n");
	else printf("NO\n");
	return 0;
}