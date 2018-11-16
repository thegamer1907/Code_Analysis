#include <bits/stdc++.h>
using namespace std;
#define int long long

int a[1000010],b[1000010],e[1001][1001],o[300010],prime[300010],n1,n2,t,l,r,k,c,x,y,z,j,c1,c2,n,d,m,sum,fact[300010];
stack<int> s; deque<int> q; string st,st1,st2; set<int> se,se1; vector<int> adj[100010], visited, dis;
map<int,int> mp; vector<pair<int,int>> we[100010];pair<int,pair<int,int>> p[300010],p1[300010];char ch[1001][1001];
const int mod=1e9+7;multimap <int,int> mm;multiset <int> ms1,ms2; 

int32_t main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    //cin>>t;
    //while(t--){
        cin>>st;
        l=st.find("AB");
        r=st.find("BA");
        x=st.find("AB",r+2);
        y=st.find("BA",l+2);
        if((l!=std::string::npos&&y!=std::string::npos) || (r!=std::string::npos&&x!=std::string::npos))cout<<"YES\n";
        else cout<<"NO\n";
    //}
    return 0;
}