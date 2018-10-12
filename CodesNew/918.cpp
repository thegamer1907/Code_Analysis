#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007
#define mp make_pair
#define fi first
#define sec second
set<string>se,se2,se3;
int main()
{
	int i,j,k,l,m,n,t;
	cin >> n >> m;
	string str;
	for(i = 0;i < n;i++){
		cin >> str;
		se.insert(str);
	}
	for(i = 0;i < m;i++){
		cin >> str;
		if(se.find(str) != se.end()){
			se.erase(str);
			se3.insert(str);
		}
		else{
			se2.insert(str);
		}
	}
	int cnt1 = 0,cnt2 = 0;
	if(se3.size()%2 == 1){
		cnt1 += 1;
	}
	cnt1 += se.size();
	cnt2 += se2.size();
	if(cnt1 > cnt2){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}
}
