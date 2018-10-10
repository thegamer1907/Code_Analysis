#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAXN=1e6+5;
int tab[MAXN];

int check(int n){
	int res=0;
	while(n){
		res+=n%10;
		n/=10;
	}
	return res;
}

int main(){
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
    int k;
    cin >> k;
    int cnt=0;
    for(int i=0;i<11e6;i++){
		if(check(i)==10)
			cnt++;
		if(cnt==k){
			cout << i;
			return 0;
		}
	}
}
