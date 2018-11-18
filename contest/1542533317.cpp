#include <iostream>
#include <algorithm>
using namespace std;

double t[3];
int t1, t2;

int main()
{
	cin >> t[0] >> t[1] >> t[2] >> t1 >> t2;
	if((int)t[1] % 5 == 0 && t[2] == 0)
		t[1] /= 5;
	else 
		t[1] = t[1] / 5 + 0.1;
	if((int)t[2] % 5 == 0)
		t[2] /= 5;
	else
		t[2] = t[2] / 5 + 0.1;
	if(t[1] != 0 || t[2] != 0)
		t[0] += 0.1;
	sort(t, t + 3);
	if((t1 < t[0] || t1 > t[2]) && (t2 < t[0] || t2 > t[2]))
		cout << "YES\n";
	else if(t1 > t[0] && t1 < t[1] && t2 > t[0] && t2 < t[1])
		cout << "YES\n";
	else if(t1 > t[1] && t1 < t[2] && t2 > t[1] && t2 < t[2])
		cout << "YES\n";
	else
		cout << "NO\n";
	return 0;
}