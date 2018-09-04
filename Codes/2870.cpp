#include<bits/stdc++.h>
using namespace std;

int n;
int lps[1000005];
string s;

int main(){
	cin.sync_with_stdio(false);
	cin.tie(0);
	cin >> s;
	n = s.length();
	lps[0] = 0;
	int i = 1;
	int j = 0;
	while(i < n){
		if(s[i] == s[j]){
			lps[i] = j+1;
			j++;
			i++;
		}
		else{
			if(j == 0){
				lps[i] = 0;
				i++;
			}
			else{
				j = lps[j-1];
			}
		}
	}
	
	int valid[n] = {0};
	for(int i = 1; i < n-1; i++){
		valid[lps[i]] = 1;
	}

	int now = lps[n-1];
	while(now != 0){
		if(valid[now] == 1){
			break;
		}
		now = lps[now-1];
	}

	int ans = now;
	if(ans == 0){
		cout << "Just a legend\n";
	}
	else{
		for(int i = 0; i < ans; i++){
			cout << s[i];
		}
		cout << '\n';
	}
	return 0;
}