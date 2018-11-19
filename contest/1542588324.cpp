#include <cstdio>
#include <iostream>
#include <string.h>
#include <string> 
#include <map>
#include <queue>
#include <deque>
#include <vector>
#include <set>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <stack>
#include <iomanip>
#define mem0(a) memset(a,0,sizeof(a))
#define meminf(a) memset(a,0x3f,sizeof(a))
using namespace std;
typedef long long ll;
typedef long double ld;
typedef double db;
const ll llinf=0x3f3f3f3f3f3f3f3f;   
const ld pi=acos(-1.0L);
db a[3];

int main() {
	db h,m,s,c,b;
	cin >> h >> m >> s >> b >> c;
	h*=5;c*=5;b*=5;
	if (h==60) h=0;
	if (b==60) b=0;
	if (c==60) c=0;
	h+=s/720.0+m/12.0;
	m+=s/60.0;
	a[0]=h;a[1]=m;a[2]=s;
	sort(a,a+3); 
	if (a[0]<=b&&b<=a[1]&&a[0]<=c&&c<=a[1]) cout << "YES"; else
	if (a[1]<=b&&b<=a[2]&&a[1]<=c&&c<=a[2]) cout << "YES"; else
	if ((b>=a[2]||b<=a[0])&&((c>=a[2]||c<=a[0]))) cout << "YES"; else 
	cout << "NO";
	return 0;
}