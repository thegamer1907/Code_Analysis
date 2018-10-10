#include <bits/stdc++.h>
#define MAXN 1001000
typedef long long ll;

using namespace std;

int n, b[MAXN], ans = 0;
string s;

void kmpPre(){
	int i = 0, j = -1;
	b[0] = -1;
	while(i < n){
		while(j >= 0 && s[i] != s[j]) j = b[j];
		i++; j++;
		b[i] = j;
	}
}


int main(){
    #ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
	#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    cin >> s;
    n = s.size();
    kmpPre();
    for(int i = 1; i < n; i++){
    	if(i - b[i] > 0 && b[i] == b[n]) ans = max(b[i], ans);
    }
    if(ans == 0) ans = b[b[n]];
    if(ans > 0){
    	for(int i = 0; i < ans; i++) cout << s[i];
    } else{
    	cout << "Just a legend";
    }
}