#include <bits/stdc++.h>

#define mp make_pair
#define pb push_back

using namespace std;
typedef long long ll;
typedef long double ld;


int main()
{
	bool check = false;
bool check1 = false;
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
::ios::sync_with_stdio(false);
string s;
cin >> s;
int n;
cin >> n;
char q,w;
string t;
for (int i = 0; i < n; ++i)
{
	cin >> t;
	if (s ==t ){
		cout << "YES" << endl;
		return 0;
	}
if (t[1] == s[0]) {
	check = true;
}
if (t[0] == s[1]){
	check1 = true;
}	

}
	if (check == true && check1 == true){
		cout << "YES" << endl;
		return 0;
	}
	else cout << "NO";
	return 0;

		}
