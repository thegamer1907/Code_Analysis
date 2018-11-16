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

int h[1001000];


int main(){
    FastRead;
    int n, k;cin >> n >> k;
    FOR1(i, n){
        cin >> h[i];
    }
    int sum = 0;
    FOR1(i, k)sum += h[i];
    int ans = sum;
    int minIndex = 1;
    int prev = h[1];
    for(int i = k+1; i <= n; i++){
        sum += h[i] - prev;
        prev = h[i-k+1];
        if(ans > sum){
            ans = min(ans, sum);
            minIndex = i-k+1;
        }
        
    }
    cout << minIndex <<endl;


}
