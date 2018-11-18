#include <bits/stdc++.h>
using namespace std;
#define SYNC ios_base::sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0) ;
#define inf 0x3f3f3f3f
#define INF 1000111000111000111LL
#define mod 1000000007
#define pi acos(-1.0)
#define eps 1e-8
#define endl '\n'
#define mp make_pair
#define mt make_tuple
#define pb push_back
#define fi first
#define se second
#define all(cc) (cc).begin(),(cc).end()
using lli = long long int ;
using pii = pair<int, int> ;
using vi = vector<int> ;
using vb = vector<bool> ;
using vvi = vector<vector<int>> ;
using vlli = vector<long long int> ;
using vpii = vector<pair<int, int>> ;
int main(){
SYNC
string s;cin>>s;
int n;
cin>>n;
vector<string> A;
for(int i=0;i<n;i++){
	string x;
	cin>>x;A.pb(x);A.pb(x);
}
n*=2;
int flag1=0,flag2=0;
for(int i=0;i<n;i++){
	if(A[i][0]==s[0] && A[i][1]==s[1]){flag2=1;flag1=1;}
}
if(flag2 && flag1){
	cout<<"YES";return 0;
}
flag1=flag2=0;
for(int i=0;i<n;i++){
	if(A[i][1]==s[0] && !flag1) {flag1=1;}
	if(A[i][0]==s[1] && !flag2) {flag2=1;} 
}
if(flag2 && flag1){
	cout<<"YES";return 0;
}
cout<<"NO";
return 0;

}