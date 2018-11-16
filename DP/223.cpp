#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0);cin.tie(0)
#define pb push_back
#define mp make_pair
#define fst first
#define snd second
#define sz(x) int(x.size())
#define all(v) (v).begin(), (v).end()
#define trace(x) cerr << #x << ": " << x <<endl;
#define rep(i,a,b) for(int i = int(a); i <int(b);i++)
#define rrep(i,a,b,j,c,d) for(int i = int(a); i <int(b);i++) for(int j = int(c); j <int(d);j++)
using namespace std;

typedef long long lli;
typedef pair<lli, lli> ii;
typedef vector<int> vi;
typedef vector<ii> vii;


	vector<int> mini,maxi,auxv;
	map<int,int> smaxi,smini,auxs;

bool belong_maxi(int name) {
	map<int,int>::const_iterator it = smaxi.find(name);
	return it!=smaxi.end();
}

/*
bool belong_mini(int name) {
	map<int,int>::const_iterator it = smini.find(name);
	return it!=smini.end();
}
*/

int main(){
	fastio;
	int n,m,num;
	cin>>n;
	rep(i,0,n){
		cin>>num;
		mini.pb(num);
		smini[num]++;
	}
	cin>>m;
	rep(i,0,m){
		cin>>num;
		maxi.pb(num);
		smaxi[num]++;
	}

	if(!(sz(maxi)>=sz(mini))){
		auxv=maxi;
		maxi=mini;
		mini=auxv;

		auxs=smaxi;
		smaxi=smini;
		smini=auxs;
	}
	int con=0;
	sort(all(mini));
	rep(i,0,sz(mini)){
		bool chi=true;
		
		if(belong_maxi(mini[i]-1) and smaxi[mini[i]-1]>0) smaxi[mini[i]-1]--,con++;
		else if(belong_maxi(mini[i]) and smaxi[mini[i]]>0) smaxi[mini[i]]--,con++;
		else if(belong_maxi(mini[i]+1) and smaxi[mini[i]+1]>0) smaxi[mini[i]+1]--,con++;
	
	}
	cout<<con;

	

	return 0;
}