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
const int inf=0x3f3f3f3f;  
const ll llinf=0x3f3f3f3f3f3f3f3f;   
const ld pi=acos(-1.0L);
char a[105][5],s[5];

int main() {
	int n,k,b,c,d;
	cin >> n;
	b=c=d=0;
	scanf("%s",s);
	scanf("%d",&n);
	for (int i=1;i<=n;i++) {
		scanf("%s",a[i]);
		if (a[i][1]==s[0]) b=1;
		if (a[i][0]==s[1]) c=1;
		if (a[i][1]==s[1]&&a[i][0]==s[0]) d=1;
		if (a[i][1]==s[0]&&a[i][0]==s[1]) d=1;
	}
	if (d) cout << "YES"; else if (b&&c) cout << "YES"; else cout << "NO";
	return 0;
}