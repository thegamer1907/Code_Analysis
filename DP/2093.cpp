#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define MAX 1000000
#define pr pair<int,int>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
typedef long long ll;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int> dp(n,0);
    set<int> s;
    vector<int> A(n);
    for(int i=0;i<n;i++) {
    	cin>>A[i];
    }
    dp[n-1]=1;
    s.insert(A[n-1]);
    for(int i=n-2;i>=0;i--) {
    	if(s.find(A[i])==s.end()) 
    		dp[i]=dp[i+1]+1;
    	else
    		dp[i]=dp[i+1];
    	s.insert(A[i]);
    //	cout<<dp[i]<<" ";
    }
    while(m--) {
    	int l;
    	cin>>l;
    	cout<<dp[l-1]<<"\n";
    }
    return 0;
}