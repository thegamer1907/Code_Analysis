// UTRECHT UNIVERSITY
#include<bits/stdc++.h>
using namespace std;

#define x first
#define y second
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define rep(i,a,b) for(auto i = (a); i != (b); ++i)
#define all(v) (v).begin(), (v).end()

typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> ii;
typedef vector<int> vi;
typedef vector<vi> vvi;

const int INF = 2147483647;
const ld PI = acos(-1.0);

int N, M;

void run(){
	string word, inp;
	cin>>word;
	bool barkstart = false, barkend = false;
	cin>>N;
	rep(i,0,N){
		cin>>inp;
		if(inp==word){
			barkstart=true;
			barkend=true;
		}
		if(inp[0]==word[1])barkend=true;
		if(inp[1]==word[0])barkstart=true;
	}
	if(barkend&&barkstart){
		cout<<"YES"<<endl;
	} else {
		cout<<"NO"<<endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	run();

	return 0;
}
