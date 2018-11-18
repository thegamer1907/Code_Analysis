#include <iostream> 
#include <cstdio> 
#include <fstream> 
#include <algorithm> 
#include <cmath> 
#include <deque> 
#include <vector> 
#include <queue> 
#include <string> 
#include <cstring> 
#include <map> 
#include <stack> 
#include <set> 
 
#define INT64M 0X7FFFFFFFFFFFFFFF
#define INT32M 0x7FFFFFFF
using namespace std;
typedef long long ll;

int main(){
	float h, m, s, t1, t2, a, b;
	cin >> h >> m >> s >> t1 >> t2;
	m += s / 60;
	h += m / 60;
	m /= 5;
	s /= 5;
	a = max(t1, t2);
	b = min(t1, t2);
	t1 = 0;
	if(a > h && b < h)
		t1++;
	if(a > m && b < m)
		t1++;
	if(a > s && b < s)
		t1++;
	if(t1 == 3 || t1 == 0)
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	return 0;
}