#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<pair<int,int> > vp;
#define pb push_back
#define mp make_pair
#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	cin>>s;
	int mk = 0;
	for(int i=0;i<s.length()-1;i++){
		if(!mk && s[i] == 'A' && s[i+1] == 'B')
			mk++, i += 1;
		else if(mk == 1 && s[i] == 'B' && s[i+1] == 'A')
			mk++;
	}
	if(mk == 2){
		cout<<"YES\n";
		return 0;
	}	
	mk = 0;
	for(int i=0;i<s.length()-1;i++){
		if(!mk && s[i] == 'B' && s[i+1] == 'A')
			mk++, i += 1;
		else if(mk == 1 && s[i] == 'A' && s[i+1] == 'B')
			mk++;
	}
	if(mk == 2)
		cout<<"YES\n";
	else cout<<"NO\n";

	
}