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
string a;
bool flag1,flag0;
int n;
string s[MAXN];
int main(){
	int i;
	cin>>a;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		cin>>s[i];
		if(s[i][0]==a[1]){
			flag1=1;
		}
		if(s[i][1]==a[0]){
			flag0=1;
		}
		if(s[i]==a){
			cout<<"YES\n";
			return 0;
		}
	}
	if(flag1&&flag0){
		cout<<"YES\n";
	}else{
		cout<<"NO\n";
	}
	return 0;
}

/*

*/
