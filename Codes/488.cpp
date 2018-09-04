/*===============================================================
*  Filename: B.cpp
*  Author: zhuyutian
*  Date: 2018.04.11
================================================================*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const int maxn = 100005;

int k;

int cal(int x){
	int res = 0;
	while(x) { res += x % 10; x /= 10; }
	return res;
}

int main()
{
    //freopen("B.in","r",stdin);
    //freopen("B.out","w",stdout);
    cin>>k;
	int ans = 0;
	while(k){
		ans++;
		if(cal(ans) == 10) k--;	
	}
	cout<<ans<<endl;
	return 0;
}
