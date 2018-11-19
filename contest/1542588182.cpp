#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define iter(it,a) for(auto it=a.begin();it!=a.end();it++)
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define preturn(X) cout<<X<<endl; return 0
typedef long long ll;
const ll MOD = 1e9+7;
//cout.setf(ios::fixed); cout.precision(18)



int main(){
    cin.tie(0);ios_base::sync_with_stdio(0);
    string s;
    cin>>s;
    int n;
    cin>>n;
    string a[n];
    bool c = 0;
    rep(i,0,n){
    	cin>>a[i];   	
    	if(a[i]==s){
    		c = 1;
    	}
    }      
    if(c==1){
    	preturn("YES");
    }
    rep(i,0,n){
    	rep(j,0,n){
    		if(a[i][1]==s[0] && a[j][0]==s[1]){
    			preturn("YES");			
    		}
    	}
    }
    preturn("NO");
}