#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
#define INF 0x3f3f3f3f
#define PI 3.1415926 
#define mem(a,x) memset(a,x,sizeof(a))
int gcd(int p, int q) {return q==0?p:gcd(q,p%q);}

int main(){
	int n, k, a = 0, b = 0, ans = 0, temp = 0;
	string s;
	cin >> n >> k >> s;
	for(int i = 0; i < n; i++){
		if(s[i] == 'a'){
			a++;
		}
		else{
			b++;
		}
		if(min(a, b) <= k){
			ans = max(ans, a+b);
		}
		else{
			if(s[temp] == 'a'){
				a--;
			}
			else{
				b--;
			}
			temp++;
		}
	}
	cout << ans << endl;
}