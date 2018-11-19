#include <algorithm>
#include <cstdio>

using namespace std;

double h, m, s, a, b;

int main() {
	scanf("%lf%lf%lf%lf%lf", &h, &m, &s, &a, &b);
	m /= 5;
	s /= 5;
	m += s / 60;
	h += m / 60;
	if(a > b) {
		swap(a, b);
	}
	if(a == b) {
		printf("YES\n");
		return 0;
	}
	int temp = 0;
	if(a < h && h < b && a < m && m < b && a < s && s < b) {
		temp = 1;
	}
	if((h < a || b < h) && (m < a || b < m) && (s < a || b < s)) {
		temp = 1;
	}
	if(temp) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	return 0;
}