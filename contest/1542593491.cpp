#include <bits/stdc++.h>
using namespace std;

#define fastIO ios::sync_with_stdio(false);cout.tie(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define MP make_pair
#define inf INT_MAX
#define minf INT_MIN

typedef long long int lli;

ofstream outfile;
ifstream infile;

int main()
{
	infile.open("input.txt");
	outfile.open("output.txt");

	string s1, s2, s3, s;
	int n, i;
	cin >> s >> n;
	vector <string> arr;
	for(i = 1; i <= n; ++i){
		cin >> s1;
		if(s1 == s){
			cout << "YES\n";
			return 0;
		}
		arr.pb(s1);
	}

	for(i = 0; i < n; ++i){
		for(int j= 0; j < n; ++j){
			s2 = (char)arr[i][1] ;
			s2 += (char)arr[j][0];
			//cout << s2 << "\n";
			if(s2 == s){
				cout << "YES\n";
				return 0;
			}
		}
	}
	cout << "NO\n";
}