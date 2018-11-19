#include <iostream>
#include <cstdio>
#include <set>
#define N 100005
using namespace std;

int n, s;
string a, b;
set<char> v1, v2;
bool z;
int main()
{
	int i;
	cin >> a;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> b;
		if (a == b) {
			z = true;
		}
		v1.insert(b[0]);
		v2.insert(b[1]);
	}
	if (v2.count(a[0]) == 1 && v1.count(a[1]) || z) {
		cout << "YES";
	} else {
		cout << "NO";
	}
    return 0;
}
