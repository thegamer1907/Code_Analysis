#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <limits>
#include <queue>
#include <cmath>
#include <algorithm>
#define FOR(i,n,m) for(int i=n;i<m;i++)
#define REP(i,n) FOR(i,0,n)
#define pb(x) push_back(x)
#define MAX MAX_INT
#define fst first
#define snd second
#define sz(x) int(x.size())
#define all(v) v.begin(),v.end()
#define mp(x,y) make_pair(x,y)
using namespace std;
int main(){
	int orcost;
	int money;
	int numban;
	int totalcost = 0;
	cin >> orcost >> money >> numban;
	FOR(i,1,numban+1){
		totalcost+=i*orcost;
	}
	if(totalcost-money>0)
		cout<<totalcost-money;
	else
		cout<<0;
	return 0;
}