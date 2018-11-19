#include <bits/stdc++.h>
#define pb push_back
#define sz(x) x.size()
#define F first
#define S second
#define mp make_pair
#define ll long long
#define sqr(x) ((x)*(x))
#define inf 1e18
using namespace std;
    ll a[2000010], d[2000010];
    ll b[200010], c[1010][1010];
    ll mn=inf, mx=-inf, ans, cnt, sm=1, n, m, cur;
    bool ok, okk, u[1000010], uu[310][310], uk[1000010];
    char ck[510][510], ch[100010];
    int dx[4]={0, 1, 0, -1}, dy[4]={-1, 0, 1, 0};
    vector < ll > g[900010], an[100];
                       
int main(){
                                               
    //freopen ("input.txt","r",stdin); freopen ("output.txt","w",stdout);
    
    std::ios::sync_with_stdio(false);                                                                                                      
    
    string s;
    cin>>s;
    cin>>n;
    string ss[110];
    for(int i=0;i<n;i++){
    	cin>>ss[i];
    }
    for(int i=0;i<n;i++){
        if(ss[i]==s){
    		cout<<"YES";
    		return 0;
    	}
    	for(int j=i;j<n;j++){
    		string x=ss[i];
    		x+=ss[j];
    		if(x.substr(1, 2)==s){
    			cout<<"YES";
    			return 0;
    		}
    		x=ss[j];
    		x+=ss[i];
    		if(x.substr(1, 2)==s){
    			cout<<"YES";
    			return 0;
    		}
    	}
    }
    cout<<"NO";



    
        
        
        
    return 0;
}