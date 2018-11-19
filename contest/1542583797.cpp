#include <bits/stdc++.h>
#define N 100020
#define ll long long
using namespace std;
inline int read(){
	int x=0,f=1;char ch=getchar();
	while(ch>'9'||ch<'0')ch=='-'&&(f=0)||(ch=getchar());
	while(ch<='9'&&ch>='0')x=(x<<3)+(x<<1)+ch-'0',ch=getchar();
	return f?x:-x;
}
ll a = read()%12, b = read(), c = read(), x = read()%12, y = read()%12, num;
int main() {
	if (x > y) swap(x, y);
	double h = (a+(double)b/60+(double)c/3600)*30;
	double m = (b+(double)c/60)*6;
	double s = c*6;
	if (h <= y*30 && h >= x*30) ++num;
	if (m <= y*30 && m >= x*30) ++num;
	if (s <= y*30 && s >= x*30) ++num;
	puts((num == 3 || !num) ? "YES" : "NO");
}
