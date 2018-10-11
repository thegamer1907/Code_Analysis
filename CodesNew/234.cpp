#include <stdio.h>
#include <iostream>
#include <vector>


using namespace std;

int max(long long a, long long b) {
	if (a > b)
		return a;
	else
		return b;
}
int min(long long a,long long b) {
	if (a > b)
		return b;
	else
		return a;
}
void swap(int*pa, int*pb) {
	int t = *pa;
	*pa = *pb;
	*pb = t;
}

int get(int a) {
	if (a >= 'a'&&a <= 'f')
		return 10 + a - 'a';
	else
		return a - '0';
}

#define scanf_s scanf

/*int main(void) {
	double a,b,c,d;	
	scanf_s("%lf%lf%lf%lf",&a,&b,&c,&d);
	
	if (a < b) {
		double t = a;
		a = b;
		b = t;
	}
	if (c < d) {
		double t = c;
		c = d;
		d = t;
	}
	if (a*a + b*b < c*c + d*d) {
		printf("NO");
		return 0;
	}

	if (a >= c&&b >= d) {
		printf("YES");
		return 0;
	}

	if (a*a + b*b > (c + d)*(c + d)) {
		printf("YES");
		return 0;
	}
	printf("NO");
	return 0;
}*/

int main() {
	int n;
	int t;
	cin >> n >> t;
	vector <int> a(n+1);
	a[0] = 0;
	for (int i = 1; i <= n; i++)
		cin>>a[i];
	int d = 0;
	int j = 0;
	int max_ = 0;
	for (int i = 1;j<=n && i <= n; i++) {
		while (j<n && d + a[j+1] <= t) {
			d += a[j+1];
			j++;
		}
		max_ = max(j - i + 1, max_);
		d -= a[i];
	}
	cout << max_;
	return 0;
}