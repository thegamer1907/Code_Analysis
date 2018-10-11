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
const int MAXN = 1e5+3;
const int MAXR = 1;
const int MAXC = 1;
const int INF = (int)1e9;
priority_queue<int, vector<int>, greater<int>> q1;
priority_queue<int, vector<int>, less<int>> q2;
int arr[MAXN];

int x4[] = {-1,0,1,0};
int y4[] = {0,1,0,-1};

int main(void){
	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r+", stdin);
        //freopen("output.txt", "w+", stdout);
    #endif
    ios::sync_with_stdio(false);
    int n,t;cin>>n>>t;FOR(i,0,n)cin>>arr[i];
    
    int st = 0;    
    int en = 0;
    int max_books = 0;
    int curr_books;
    int curr_sum = 0;
    while(en < n){
    	debug("Start --> ST:", st, "EN:", en, "Curr Sum:", curr_sum, "Max Books:", max_books);
    	curr_sum+=arr[en];
    	en++;
    	
    	while(curr_sum > t){
    		curr_sum-=arr[st];
    		st++;
    	}
    	curr_books = en - st;
    	if(curr_books > max_books){
    		max_books = curr_books;
    	}
		
    	
    }
    
    cout<<max_books<<endl;
	return 0;
}

