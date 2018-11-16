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
#define all(x) (x).begin(), (x).end()

#define lli long long int
#define MOD 1000000007
using namespace std;
const int MAXN = 105;
const int MAXR = 1;
const int MAXC = 1;
const int INF = (int)1e9;
priority_queue<int, vector<int>, greater<int>> q1;
priority_queue<int, vector<int>, less<int>> q2;
int arr[MAXN];
int nzero[MAXN];

int x4[] = {-1,0,1,0};
int y4[] = {0,1,0,-1};

int main(void){
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r+", stdin);
        //freopen("output.txt", "w+", stdout);
    #endif
    ios::sync_with_stdio(false);
    int n;cin>>n;FOR(i,0,n)cin>>arr[i];
    nzero[0] = 0;
    bool found = false;
    FOR(i,1,n+1){
    	nzero[i] = nzero[i-1];
    	if(arr[i-1]==0){    		
    		found = true;
    		nzero[i]++;
    	}
    }
    
    if(!found){
    	cout<<n-1;
    	return 0;
    }
    
    printArray(nzero, n+1);
    int max_zeros = 0;    
    int ones = 0;
    int st = -1; int en = -1;
    for(int i = 1;i<=n;i++){
    	for(int j = i;j<=n;j++){
    		//debug("I:",i,"J:",j);
    		int len = j - i + 1;
			int num_zeros = nzero[j] -  nzero[i-1];
			int num_ones = len - num_zeros;
			if(num_zeros - num_ones >= max_zeros - ones){				
				debug("Num Zeros:", num_zeros, "Max Zeros:", max_zeros, "NUM ONES:", num_ones);
				max_zeros = num_zeros;
				ones = num_ones;
				st = i - 1;
				en = j - 1;
			}
    	}
    }
    
    debug("ST:", st, "EN:", en);
    if(st!=-1 && en!=-1){
    	FOR(i,st,en+1){
    		arr[i]=1-arr[i];
    	}	
    }
    
    int cnt = 0;
    FOR(i,0,n){
    	if(arr[i]==1){
    		cnt++;
    	}
    }
    cout<<cnt;
	return 0;
}

