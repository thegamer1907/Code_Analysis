#include<bits/stdc++.h>

using namespace std;

#define ll long long

#define all(x) x.begin(), x.end()

int main(){

	cin.tie(0);
	cin.sync_with_stdio(0);

	#ifdef Cyborg101
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

	int h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;

	h = (h * 5) % 60;
	t1 = (t1 * 5) % 60;
	t2 = (t2 * 5) % 60;

	// if(t2 == h || t2 == m || t2 == s){
	// 	puts("NO");
	// 	return 0;
	// }
	
	bool ok12 = true; 
	for(int i = t1; i != t2; i = (i + 1) % 60){
		if(i == h || i == m || i == s){
			ok12 = false;
			break;
		}
	}
	
	bool ok21 = true;
	for(int i = t2; i != t1; i = (i + 1) % 60){
		if(i == h || i == m || i == s){
			ok21 = false;
			break;
		}	
	}

	puts((ok12 || ok21) ? "YES" : "NO");

	return 0;
	
}