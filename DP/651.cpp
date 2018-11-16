#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <string>

using namespace std;
typedef long long ll;
const int N = 100005;
int dp[N];
int main()
{	
	string s;
	cin >> s;
	for(int i = 1; i < s.size(); i++){
		if(s[i]==s[i-1])
			dp[i]=dp[i-1]+1;
		else
			dp[i]=dp[i-1];
	}
	int m;
	cin >> m;
	int x,y;
	while(m--){
		cin >> x >> y;
		cout << dp[y-1]-dp[x-1] << endl;
	} 


    return 0;
}
