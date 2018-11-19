#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)
#define f first
#define s second
#define fr freopen("in.txt","r",stdin)
#define pb push_back
#define pi pair<int,int>
#define pii pair<pi,int>

bool fi[27]={0};
bool se[27]={0};
string p[10111];
int main() {
	string s;
	cin >> s;
	int n;
	cin >> n;
	bool flag = 0;
	rep(i,n) {
		cin >> p[i];
		if(p[i]==s) {
			flag = 1;
		}
		fi[p[i][0]-'a']=1;
		se[p[i][1]-'a']=1;
	}
	if((fi[s[1]-'a'] & se[s[0]-'a']) | flag ) {
		cout << "YES";
	}
	else{
		cout << "NO";
	}
}