#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define Aloveg ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
const int mn = 1e6+5;

int main()
{
    Aloveg

    int n, m; cin >> n >> m;
    string s[n+m+1];
    for(int i = 0; i < n+m; i += 1) cin >> s[i];
    
    sort(s, s+n+m);
    
    int com = 0;
    
    for(int i = 1; i < n+m; i += 1){
    	if (s[i] == s[i-1])
    		com += 1;
	}
	n -= com;
	m -= com;
	bool turn = 0;
	
	while(1){
		if(com){
			com -= 1;
			turn = !turn;
			continue;
		}
		if(!turn){
			if(n == 0){
				puts("NO"); return 0;
			}
			n -= 1;
			turn = !turn;
		}
		else{
			if(m == 0){
				puts("YES"); return 0;
			}
			m -= 1;
			turn = !turn;
		}
	}
    
    return 0;
}


