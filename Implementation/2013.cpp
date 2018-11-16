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
	int queries;
	int x=0;
	int y=0;
	int z=0;
	int xforce;
	int yforce;
	int zforce;
	cin>>queries;
	REP(i,queries){
		cin >> xforce >> yforce >> zforce;
		x += xforce;
		y += yforce;
		z += zforce;
	}
	if(x==0&&y==0&&z==0)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}