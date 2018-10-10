/* Sometimes , You Just
Have To Bow Your Head , Say
A Prayer & Weather The Storm :) */
//RTn_E
#include <bits/stdc++.h>
#define __Sync ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0) ;
#define __file freopen("input.txt", "r", stdin) ; freopen("output.txt", "w", stdout) ;
#define ll long long
#define pb push_back
#define ld long double
#define F first
#define S second
#define mk make_pair

using namespace std;
const ll mod = 1e9 + 7;
const int maxn = 1e5 + 100;
const ll inf = 1e12;

//Main CODE :/\

int h , dp[maxn] , nxt[maxn] , k;
bool check(int s , int e){
	int len = e - s + 1;
	int cnt;
	if (!s)
        cnt = dp[e];
	else
        cnt = dp[e] - dp[s - 1];
	return (k >= cnt || k >= len - cnt) ;
}
int main(){
	__Sync
	int n , e , l , r;
	string s;
	cin >> n >> k >> s;
	char c = s[0];
	dp[0] = (s[0] == 'a');
	int ans = 0 , ans1 = 0;
	for(int i = 0 ; i < n ;i++)
		dp[i] = dp[i - 1] + (s[i] == 'a');
	for(int i = 0; i < n ;i++){
		l = i - 1;
		r = n;
		ans1 = 0;
		while (l < r){
			h = (l + r) / 2 ;
			if (check(i , h)){
				if (ans1 == h - i + 1)
                    break;
				ans1 = h - i + 1;
				l = h;
			}
			else
                r = h;
		}
		ans = max (ans1 , ans) ;
	}
	cout << ans << endl;
	return 0 ;
}
//The_End
//Game Over :D
