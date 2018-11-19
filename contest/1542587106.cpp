#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define INF 0x3f3f3f3f
#define PI 3.1415926 
#define mem(a,x) memset(a,x,sizeof(a))
int gcd(int p, int q) {return q==0?p:gcd(q,p%q);}

int main(){
//	freopen("C:\\Users\\DJ\\Desktop\\test.txt", "r", stdin);
	char s[5];
	int n, num1 = 0, num2 = 0;
	cin >> s >> n;
	while(n--){
		char a, b;
		cin >> a >> b;
		if(a == s[0] && b == s[1]){
			num1 = 1;
			num2 = 1;
		}
		if(b == s[0]){
			num1 = 1;
		}
		if(a == s[1]){
			num2 = 1;
		}
	}
	if(num1 && num2){
		puts("YES");
	}
	else{
		puts("NO");
	}
	return 0;
}