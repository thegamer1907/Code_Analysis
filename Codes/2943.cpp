#include <bits/stdc++.h>

using namespace std;
#define MAXN 10101010
string s;
int p[MAXN];
int freq[MAXN];
vector<int> suf;

void build(){
	p[0] = 0;
	int idx;
	for (int i = 1; i < (int)s.size(); i++)
	{
		idx = p[i-1];
		while(s[idx] != s[i] && idx > 0)
			idx = p[idx-1];
			
		if(s[idx] == s[i])
			idx++;
		
		p[i] = idx;
	}
	
	int longest = p[(int)s.size() - 1];
	while (longest > 0){
		suf.push_back(longest);
		longest = p[longest - 1];
	}
	
	for (int i = 0; i < (int)s.size()-1; i++)
		freq[p[i]]++;
}

void solve(){
	int idx = 0, ans = -1;
	for (int i = (int)suf.size()-1; i >= 0; i--)
	{
		while (idx < suf[i])
		{
			freq[p[idx]]--;
			idx++;
		}
		if(freq[suf[i]] > 0)
			ans = suf[i];
		
	}
	
	if(ans == -1)
		cout << "Just a legend\n";
	else
		cout << s.substr(0, ans) << "\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> s;
	build();
	solve();
	
	return 0;
}
