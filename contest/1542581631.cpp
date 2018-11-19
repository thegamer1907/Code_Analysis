/*
* @Author: wchhlbt
* @Last Modified time: 2017-10-05
*/
#include <bits/stdc++.h>

#define inf 0x3f3f3f3f
#define pb push_back
#define AA first
#define BB second
#define ONES(x) __builtin_popcount(x)
#define _  << "  " <<
using namespace std;

typedef long long ll ;
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
const double eps =1e-8;
const int mod = 1000000007;
const double PI = acos(-1.0);
inline int read(){ int num;    scanf("%d",&num);   return num;}
const int maxn = 207;

ll ans;

int main()
{
	string s,t;
	cin>>s;
	int n = read();
	bool f1 = false;
	bool f2 = false;
	bool f3 = false;
	for(int i = 1; i<=n; i++){
		cin>>t;
		if(t==s)	f3 = true;
		if(t[0]==s[1])	f2 = true;
		if(t[1]==s[0])	f1 = true;
	}
	if( (f1 && f2) || f3)	puts("YES");
	else	puts("NO");
	//cout << ans << endl;
    return 0;
}