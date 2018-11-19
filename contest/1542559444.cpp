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
    
    ll h, t, txx, tyy;
    cin>>h>>m>>t>>txx>>tyy;
    
    if(m==0 || t==0){
    	u[120]=true;
    }
    u[m*2]=true;
    u[t*2]=true;
    
    if(m!=0 || t!=0){
    	u[(h*10+1)%120]=true;	
    }
    else{
    	u[h*10]=true;
    }
    
    ll tx=min(txx, tyy);
    ll ty=max(txx, tyy);
    
    for(int i=1;i<121;i++){
    	if(u[i]){
    //		cout<<i<<' ';
    	}
    }
    //cout<<endl;
   	//cout<<endl;
   	ok=false;

    //cout<<tx<<' '<<ty<<endl;


    for(int i=tx*10;i<ty*10;i++){
    	if(u[i]){
    		ok=true;
    	}
    }
    //cout<<ok<<endl;
    if(!ok){
    	cout<<"YES";
    	return 0;
    }
    ok=false;
    
    for(int i=ty*10;i<121;i++){
    	if(u[i]){
    		ok=true;
    	}
    }
    for(int i=1;i<tx*10;i++){
    	if(u[i]){
    		ok=true;
    	}
    }
    if(!ok){
    	cout<<"YES";
    	return 0;
    }
    cout<<"NO";
    

    
    
        
        
    return 0;
}