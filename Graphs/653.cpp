#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fo(i,a,b) for(i=a;i<b;i++)
#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define sz(x) (int)x.size()
#define ip(x) cin>>x
#define ipp(x,y) cin>>x>>y
int main(){
	boost
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
	#endif
	ll n,k,i;
    string s;
    ipp(n,k);
    ip(s);
    while(k--){
        fo(i,1,n){
            if(s[i] == 'G' && s[i-1] == 'B'){
                s[i-1]='G';
                s[i]='B';
                i+=1;
            }
        }
    }
    cout<<s<<endl;
	return 0;
}