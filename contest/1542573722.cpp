#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
typedef long long LL;

map<int,int> vis;

int main(){
	int h,m,s,t1,t2;
	cin >> h >> m >> s >> t1 >> t2;
	vis[s] = 1;
	if(h == 12){
		if(m == 0 && s == 0) vis[0] = 1;
		else vis[1] = 1;
	}
	else{
		if(m == 0 && s == 0) vis[h * 5] = 1;
		else vis[h * 5 + 1] = 1;
	}
	if(m % 5 == 0){
		if(s == 0) vis[m] = 1;
		else{
			if(m == 59) vis[59] = 2,vis[0] = 2;
			else vis[m] = 2,vis[m + 1] = 2;
		}
	}
	else vis[m] = 1;
	int f,e,p;
	f = t1 * 5;
	if(t1 == 12) f = 0;
	e = t2 * 5;
	if(t2 == 12) e = 0;
	p = f;
	while(true){
		if(vis[p] == 1) break;
		if(vis[p] == 2){
			if(p == e){
				cout << "YES";
				return 0;
			}
			break;
		}
		if(p == e){
			cout << "YES";
			return 0;
		}
		p++;
		if(p == 60) p = 0;
		if(p == f) break;
	}
	f = t2 * 5;
	if(t2 == 12) f = 0;
	e = t1 * 5;
	if(t1 == 12) e = 0;
	p = f;
	while(true){
		if(vis[p] == 1) break;
		if(vis[p] == 2){
			if(p == e){
				cout << "YES";
				return 0;
			}
			break;
		}
		if(p == e){
			cout << "YES";
			return 0;
		}
		p++;
		if(p == 60) p = 0;
		if(p == f) break;
	}
	cout << "NO";
}
