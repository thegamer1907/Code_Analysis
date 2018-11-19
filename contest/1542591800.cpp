#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ff first
#define asc(a) ((int)a)
#define ss second
#define mp(a,b) make_pair(a,b)
#define pii pair<int,int>
#define pll pair<lli,lli>
#define pii3 pair< int,pair<int,int> >
#define pll3 pair< lli,pair<lli,lli> >
#define pb(a) push_back(a)
#define en "\n"
const lli MOD=1e9+7;
/////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////
int n;
string s[101];
int main(){
	int l=0,f=0;
	string q;
	cin>>q;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i];
		if(s[i]==q){
			cout<<"YES";
			return 0;
		}
		if(s[i][0]==q[1])l=1;
		if(s[i][1]==q[0])f=1;
	}
	if(l==1 && f==1)cout<<"YES";
	else cout<<"NO";
	return 0;
}