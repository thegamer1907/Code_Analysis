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
int a[1000005];
int cn[16];
int main()
{
	int i,j,k,l,m,t,r,cnt = 0;
	int flag = 0;
	ll ans = 0,an = 0;
	int n1;
	cin >> n1 >> k;
	int n[4];
	for(i = 0;i < n1;i++){
		for(j = 0;j < k;j++){
			cin >> n[j];
		}
		if(k == 1){
			cn[n[0]]++;
		}
		if(k == 2){
			cn[n[0]*2 + n[1]]++;
		}
		if(k == 3){
			cn[n[0]*4 + n[1]*2 + n[2]]++;
		}
		if(k == 4){
			cn[n[0]*8 + n[1]*4 + n[2]*2 + n[3]]++;
		}
	}
	for(i = 0;i < (1<<k);i++){
		for(j = 0;j < (1<<k);j++){
			if((i&j) == 0){
				if(cn[i] > 0 && cn[j] > 0){
					flag = 1;
					break;
				}
			}
		}
		if(flag == 1){
			break;
		}
	}
	if(flag == 1){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
}
