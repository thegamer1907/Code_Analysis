#include <bits/stdc++.h>
#define pb push_back
typedef long double ld;
typedef long long ll;

using namespace std;

int ct[20];
void yes(){
	cout << "YES\n";
	exit(0);
}
void no(){
	cout << "NO\n";
	exit(0);
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n, k; cin >> n >> k;
    for(int i = 0; i < n; i++){
    	int curr = 0;
    	for(int j = 0; j < k; j++){
    		int x; cin >> x;
    		if(x) curr ^= (1 << j);
    	}
    	ct[curr]++;
    }
    if(k == 1){
    	if(ct[0]) yes();
    	else no();
    }
    if(k == 2){
    	if(ct[0]) yes();
    	if(ct[1] && ct[2]) yes();
    	no();
    }
    if(k == 3){
    	if(ct[0]) yes();
    	// check if subset of the complement exists
    	for(int i = 1; i < 8; i++){
    		if(ct[i]){
    			int comp = 7 ^ i;
    			for(int j = 0; j < 8; j++){
    				if(ct[j] && ((comp & j) == j)){
    					yes();
    				}
    			}
    		}
    	}
    	no();
    }
    if(k == 4){
    	if(ct[0]) yes();
    	// check if subset of the complement exists
    	for(int i = 1; i < 16; i++){
    		if(ct[i]){
    			int comp = 15 ^ i;
    			for(int j = 0; j < 16; j++){
    				if(ct[j] && ((comp & j) == j)){
    					yes();
    				}
    			}
    		}
    	}
    	no();

    }

    return 0;
}