#include<bits/stdc++.h>
#include<string.h>
#define ll long long
#define forn(i, j, n) for(int i=j; i<n; i++)
#define vecl vector<long long>
#define veci vector<int>
#define vec_2di vector<veci>
#define vec_2dl vector<vecl>
#define pb push_back
#define INF 1e17
#define eps 1e-8
#define mod 1000000007
using namespace std;

void solve519D(){
	ll  w[26];
	map<int, map<long long, int> >m;
	for(int i=0; i<26; i++) cin>>w[i];
	string s; cin>>s;
	long long dp[s.length()]={0}; dp[0]=w[(int)(s[0]-97)];
	for(int i=1; i<s.length(); i++)dp[i]=dp[i-1]+w[(int)(s[i]-97)];
	long long ans=0;
	for(int i=s.length()-1; i>=0; i--){
		ans+=m[(int)(s[i]-97)][dp[i]+w[(int)(s[i]-97)]];
		m[(int)(s[i]-97)][dp[i]]++;
	}
	cout<<ans;
}
void solve474B(){
	int n; cin>>n; 
	vector<int>query(1000001);
	ll a[n]; forn(i, 0, n) cin>>a[i];
	for(int i=1; i<n; i++) a[i]+=a[i-1];
	for(int i=0; i<n; i++){
		for(int j=(i==0?1:a[i-1]+1);j<=a[i]; j++){
			query[j]=i+1;
		}
	}
	int m; cin>>m; 
int t; 
	forn(i, 0, m){
		cin>>t;
		cout<<query[t]<<'\n';	}
}
int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	solve474B();
}


/*
int letter(char c){
	c=tolower(c);
	if (c=='q') return 9;
	if (c=='r') return 5;
	if (c=='b') return 3;
	if (c=='n') return 3;
	if (c=='p') return 1;
	if (c=='k' || c=='.') return 0;
}
void solve519A(){
	string s[8];
	for(int i=0; i<8; i++){
		cin>>s[i];
	}
	int black=0, white=0;
	forn(i, 0, 8){
		forn(j, 0, 8){
			if (s[i][j]=='.' || s[i][j]=='k') continue;
			if (isupper(s[i][j])) white+=letter(s[i][j]);
			else black+=letter(s[i][j]);
			
		}
	}
	cout<<(white==black?"Draw":(white>black?"White":"Black"));
}
void solve519B(){
	map<int, int>one, two, three;
	int n; cin>>n;
	for(int i=0; i<n; i++){
		int t; cin>>t; one[t]++;
	}
	for(int i=0; i<n-1; i++){
		int t; cin>>t; two[t]++;
	}
	for(int i=0; i<n-2; i++){
		int t; cin>>t; three[t]++;
	}
	for(auto a: one){
		if (a.second>two[a.first]){
			cout<<a.first<<'\n';
			break;
		}
	}
	for(auto a: two){
		if (a.second>three[a.first]){
			cout<<a.first;
			break;
		}
	}
}
void solve519C(){
	int n, m; cin>>n>>m;
	int cnt=0;
	while(n && m && (n>=2 || m>=2)){
		if (n>m){
			n-=2;
			m--;
			cnt++;
		}
		else {
			m-=2; n--; cnt++;
		}
	}
	cout<<cnt;
}
void solve519D(){
	ll val[26]={0};
	for(int i=0; i<26; i++) cin>>val[i];
	string s; cin>>s;
	vector<ll>str(s.length());
	for(int i=0; i<s.length(); i++){
		str[i]=val[(int)(s[i]-97)];
	}
	
}*/
