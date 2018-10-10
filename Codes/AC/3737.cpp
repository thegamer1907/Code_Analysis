#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define oo 1000000000
const double PI = acos(-1);
const int N = 100010 ;
int cur[3] , frq[3] , a ,b , c ,ap ,bp, cp;
char s[N];
long long r;

bool check(long long mid){
	long long c1 = max((long long)0,(long long)frq[0] * mid - a);
	long long c2 = max((long long)0,(long long)frq[1] * mid - b);
	long long c3 = max((long long)0,(long long)frq[2] * mid - c);
	long long all = c1 * ap + c2 * bp + c3 * cp;
	return (all <= r) ;
}

int main(){
	scanf("%s",s);
	for(int i=0;s[i] != '\0';i++){
		if(s[i] == 'B') frq[0]++; else if(s[i] == 'C') frq[2]++; else frq[1]++;
	}
	scanf("%d%d%d%d%d%d",&a,&b,&c,&ap,&bp,&cp);
	cin >> r;
	long long low = 0 , high = 1e15 , res = 0;
	while(high >= low){
		long long mid = (low + high) / 2;
		if(check(mid)){
			res = mid;
			low = mid + 1;
		}
		else
			high = mid - 1;
	}
	cout << res << endl;
    return 0;
}