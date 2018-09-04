#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
#define PB push_back
#define POB pop_back
#define MP make_pair
#define FI first
#define SE second
#define REPP(i,a,b,c) for(int i=a; i<=b; i+=c)
#define REP(i,a,b) REPP(i,a,b,1)
#define REVV(i,a,b,c) for(int i=a; i>=b; i-=c)
#define REV(i,a,b) REVV(i,a,b,1)
#define FOR(i,a) REP(i,0,a-1)
#define FORD(i,a) REV(i,a-1,0)
typedef pair < int , int > ii;
typedef pair < int , ii > iii;
typedef vector < int > vi;
typedef vector < ii > vii;

const int N = 1000005;

string s, s2;
int lps[N];
int lps2[N];
bool check(string ss){
	
	lps2[0] = -1;
	for(int i=0, j=-1; i<ss.length(); i++, j++){
		while(j >= 0 && ss[i] != ss[j]) j = lps2[j];
		lps2[i+1] = j+1;
	}
	bool ret = false;
	for(int i=0, j=0; i<s2.length(); i++, j++){
		while(j >= 0 && s2[i] != ss[j]) j = lps2[j];
		if(j+1 == ss.length()){
			return true;
		}
	}
	return false;
}

int main(){
	cin >> s;
	lps[0] = -1;
	for(int i=0, j=-1; i<s.length(); i++, j++){
		while(j >= 0 && s[j] != s[i]) j = lps[j];
		lps[i+1] = j+1;
	}
	s2 = s.substr(1,s.length() - 2);
	int ans = -1;
	int cur = lps[s.length()];
	while(cur > 0){
		if(check(s.substr(0,cur))){
			ans = cur;
			break;
		}
		cur = lps[cur];
	}
	if(ans == -1) cout << "Just a legend" << endl;
	else cout << s.substr(0,ans) << endl;
	return 0;
}
