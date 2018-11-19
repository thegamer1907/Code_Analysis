#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
#define sc(n) scanf("%d",&n)
#define scl(n) scanf("%lld",&n)
#define p(n) printf("%d",&n)
#define fi first
#define sec second
#define mp make_pair
#define pb push_back
string str[1000005];
string str1;
int a[100],b[100];
int main()
{
	int i,j,k,l,m,n,t,r,cnt = 0;
	int flag = 0;
	ll ans = 0,an = 0;
	cin >> str1;
	cin >> n;
	for(i = 0;i < n;i++){
		cin >> str[i];
		if(str[i] == str1){
			flag = 1;
			break;
		}
		a[str[i][0]-'a']++;
		b[str[i][1]-'a']++;
	}
	if(b[str1[0] - 'a'] > 0 && a[str1[1] - 'a'] > 0){
		flag = 1;
	}
	if(flag == 1){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
}
