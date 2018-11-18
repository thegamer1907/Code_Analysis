#include <iostream> 
#include <cstring>
#include <algorithm>
using namespace std;
int main() {
	double a, b, c, t1, t2;
	cin >> a>> b >> c >> t1 >> t2;
	a = a + b / 60 + c / 3600, b = (b + c / 60) / 5, c /= 5;
	int f = 0;
	double s = min(t1, t2), e = max(t1, t2);
	if (a >= s && a <= e)f++;
	if (b >= s && b <= e)f++;
	if (c >= s && c <= e)f++;
	if (f == 3 || f == 0)cout << "Yes" << endl;
	else cout << "No" << endl;
}