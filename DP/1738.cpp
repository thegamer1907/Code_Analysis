#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
#include<unordered_map>
#include<vector>
#include<queue>
#include<numeric>
#include<cmath>
#include<set>
#include<map>

#if DEBUG && !ONLINE_JUDGE
	#include "debugger.cpp"
#else
    #define debug(args...)
	#define printMatrix(args...)
    #define printArray(args...)
    #define printSegmentTree(args...)
#endif


#define pb push_back
#define mp make_pair
#define so sizeof
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define REP(i,n) FOR(i,0,n)

#define lli long long int
#define MOD 1000000007
using namespace std;
const int MAXN = 8;
const int MAXR = 1;
const int MAXC = 1;
const int INF = (int)1e9;
priority_queue<int, vector<int>, greater<int>> q1;
priority_queue<int, vector<int>, less<int>> q2;
int arr[MAXN];

int x4[] = {-1,0,1,0};
int y4[] = {0,1,0,-1};

bool myc(string s){
	debug(s);
	int n = s.size();
	vector<int> v1,v2;
	for(int i = 0;i<n-1;i++){
		if(s[i]=='A' && s[i+1]=='B'){
			v1.pb(i);	
		}
	}
	for(int i = 0;i<n-1;i++){
		if(s[i]=='B' && s[i+1]=='A'){
			v2.pb(i);	
		}
	}
	debug(v1);
	debug(v2);
	for(int i = 0;i<v1.size();i++){
		for(int j = 0;j<v2.size();j++){
			int idx1 = v1[i];
			int idx2 = v2[j];
			
			if(abs(idx1-idx2)>1){
				return true;
			}
		}
	}
	return false;
}

int main(void){
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r+", stdin);
        //freopen("output.txt", "w+", stdout);
    #endif
    ios::sync_with_stdio(false);
    string s;
    cin>>s;    
    string s2 = myc(s) ? "YES" : "NO";
    cout<<s2;
    return 0;
}

