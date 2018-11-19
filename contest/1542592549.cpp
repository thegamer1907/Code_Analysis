#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

typedef vector<int> vi;
typedef vector<vi> vvi;

typedef vector<bool> vb;
typedef vector<vb> vvb;

typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;

#define pb push_back
#define mp make_pair
#define fi first
#define se second

// ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll ll 

int main(){
	std::ios_base::sync_with_stdio(false);
	
	string pass;
	cin>>pass;

	int n;
	cin>>n;

	bool poss = false;
	string all[n];
	for(int i=0;i<n;i++) {
		cin>>all[i];
		if(all[i] == pass) poss = true;
	}	

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			string s = "";
			s += all[i][1];
			s += all[j][0];
			if(s == pass) poss = true;
		}
	}

	cout<<(poss?"YES":"NO")<<endl;
}