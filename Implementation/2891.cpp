#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define inf 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define fi first
#define se second
#define ii pair<int, int>
#define all(x) (x).begin(), (x).end()
#define N 1000007 // 10e6 + 7

set<char>st;

int main(int argc, char const *argv[]){
	string s;
	while(cin >> s){
		for(int i=0; i<s.size(); i++){
			if(s[i]!=',')st.insert(s[i]);
		}
	}
	cout << max(0, (int)st.size()-2) << endl;
	return 0;
}