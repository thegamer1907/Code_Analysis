#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<algorithm>

using namespace std;

#define MAXN 100005
#define INF 1e9
#define pb push_back
#define mp make_pair

typedef pair<int, int> ii;
typedef unsigned long long ull;
typedef long long ll;
typedef vector<ii> vii;
typedef vector<int> vi;

int dp[MAXN];

int main(){
	ios_base::sync_with_stdio(false);
	string s;
	cin>>s;
	s= " " + s;
	for(int i=1;i<s.length() - 1;i++){
		if(s[i] == 'A' && s[i+1] == 'B'){
			if(i > 1 && (dp[i-2] == 3 || dp[i-2] == 2)){
				cout<<"YES";
				return 0;
			}
			if(dp[i-1] == 2){
				dp[i] = 3;
			}else dp[i] = max(1, dp[i-1]);
		}
		else if(s[i] == 'B' && s[i+1] == 'A'){
			if(i > 1 && (dp[i-2] == 3 || dp[i-2] == 1)){
				cout<<"YES";
				return 0;
			}
			if(dp[i-1] == 1){
				dp[i] = 3;
			}else dp[i] = max(2, dp[i-1]);
		}else
		 dp[i] = dp[i-1];
	}
	cout<<"NO";
	return 0;
}
