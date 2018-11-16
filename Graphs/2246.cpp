#include <math.h>
#include <queue>
#include<functional>
#include<algorithm>
#include<list>
#include<deque>
#include<map>
#include <unordered_map>
#include<list>
#include<set>
#include<stack>
#define ll long long int
#define pb           push_back
#define F            first
#define S            second
#define FOR(i, n) for (int i = 0; i <  (int)(n); i++)
#define FOR1(i, n) for (int i = 1; i <= (int)(n); i++)
#define FORD(i, n) for (int i = (int)n; i >= 0; i--)
#define FORS(i, n) for(; i < (int)(n); i++)
#define DEBUG(X) { cout << #X << " = " << (X) << endl; }
#define PR0(A,n) { cout << #A << " = "; FORN(_,n) cout << A[_] << ' '; cout << endl; }
#define FastRead     ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;
#include <iostream>
int manager[3000];
map<int, vector<int>> employees;

int dfs(int current){
    //cout << current <<endl;
    int ans = 0;
    for(int e: employees[current]){
        ans = max(ans, dfs(e));
    }
    return ans+1;
}



int main(){
    FastRead;
    int n;cin >> n;
    vector<int> boss;
    FOR1(i, n){
        cin >> manager[i];
        if(manager[i] == -1){
            boss.pb(i);
        }
        employees[manager[i]].pb(i);
    }
    int ans = 0;
    FOR(i, boss.size()){
        ans = max(ans, dfs(boss[i]));
        //DEBUG(ans);
    }
    
    cout << ans <<endl;
    
    
    
    
    
}
