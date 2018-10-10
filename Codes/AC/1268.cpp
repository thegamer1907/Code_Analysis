#include <iostream>
#include <fstream>
#include <stdio.h>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <vector>
#include <map>
#include <set>

#define ll long long
#define ld long double
#define mp make_pair
#define pb push_back
#define pp pop_back
#define F first
#define S second

using namespace std;

const ll INF=1e18;
const ld EPS=1e-9;
const int N=1e5+1;
const int MOD=1e9+7;

map<string,bool>b;

int main(){
	int n,m,e=0;
	string s,ans="YES";
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>s;
		b[s]=1;
	}
	for(int i=1;i<=m;i++){
		cin>>s;
		if(b[s]){
			e++;	
		}
		b[s]=1;
	}
	m-=e%2;
	if(m>=n){
		ans="NO";
	}
	cout<<ans;
	return 0;
}
