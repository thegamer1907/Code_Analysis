#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<ctime>
#include<cmath>
#include<algorithm>
#include<iomanip>
#include<queue>
#include<map>
#include<bitset>
#include<stack>
#include<vector>
#include<set>
using namespace std;
#define MAXN 1010
#define MAXM 1010
#define INF 1000000000
#define MOD 1000000007
#define ll long long
#define eps 1e-8
int h,s,m,t1,t2;
int main(){
	cin>>h>>m>>s>>t1>>t2;
	h*=5;
	h%=60;
	t1*=5;
	t2*=5;
	t1%=60;
	t2%=60;
	bool flag=1;
	int x=t1;
	while(x!=t2){
		if(x==h||x==m||x==s){
			flag=0;
			break;
		}
		x++;
		x%=60;
	}
	if(flag){
		cout<<"YES\n";
		return 0;
	}
	x=t1;
	flag=1;
	while(x!=t2){
		x+=59;
		x%=60;
		if(x==h||x==m||x==s){
			flag=0;
			break;
		}
	}
	if(flag){
		cout<<"YES\n";
		return 0;
	}
	cout<<"NO\n";
	return 0;
}

/*

*/
