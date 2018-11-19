#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define pb push_back

int main(){

	string s,s1,s2;
	cin >> s1;
	int n;
	int i,j;
	cin >> n;
	i=0;
	int c1=-1,c2=-1,ans=-1;
	while(n--){
		cin >> s2;
		if(s2==s1)
			ans=1;
		if(s2[1]==s1[0])
			c1=1;
		if(s2[0]==s1[1])
			c2=1;
	}
	if(c1==1 && c2==1)
		ans=1;
	
	if(ans==1)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}