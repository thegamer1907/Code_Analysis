#include<bits/stdc++.h>
#define ll long long int
#define lI long int
#define ld long double
#define IO ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;
int main() {
	IO;
	int num_p, t; cin >> num_p >> t;
	int portals[num_p - 1];
	for (int i = 0;i < num_p - 1;i++) cin >> portals[i];
	int temp =(portals[0])+1;
	while(temp<=t){
        if(temp==t) { cout<<"YES\n"; return 0; }
        else temp +=(portals[temp-1]);
	}
	cout << "NO\n";
	return 0;
}
