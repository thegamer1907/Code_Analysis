#include <bits/stdc++.h>
#define show(a) cout << #a << " = " << a << endl;
const int MOD = 1e9+7;
const int MAXN = 10005;
const int INF = 500005;
typedef long long ll;

using namespace std;

int main(){
	int flag1=0,flag2=0;
	double hh,mm,ss,h1,h2,minn,maxn;
	cin>>hh>>mm>>ss>>h1>>h2;
	hh=hh+(mm*60+ss)/3600;
	mm=mm+ss/60;
	mm/=5;
	ss/=5;
	minn=min(h1,h2);
	maxn=max(h1,h2);
    if(hh>minn&&hh<maxn) flag1++;
    if(mm>minn&&mm<maxn) flag1++;
    if(ss>minn&&ss<maxn) flag1++;
	if(flag1==0||flag1==3) cout<<"YES\n";
	else cout<<"No\n"; 
}