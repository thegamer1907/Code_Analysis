#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<pii> vpi;

const int INF = 2e9+5;

/*
    filippos
    Contest : 868
    Task : A
*/

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);
    string s;
    cin >> s;
    int n;
    cin >> n;
    vector<string> q(n);
    for(string &x: q){
    	cin >> x;
    	if(x == s){
    		cout << "YES";
    		return 0;
    	}
    }
    for(string &r: q)
    	for(string &t : q){
    		if(r[1] == s[0] && t[0] == s[1]){
    			cout << "YES";
    			return 0;
    		}
    	}
    cout << "NO";
}