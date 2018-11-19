/*
  Lower bound: first element that is greater-or-equal.
  Upper bound: first element that is strictly greater.
  #include<boost/multiprecision/cpp_int.hpp>
  namespace mp=boost::multiprecision;
  mp::cpp_int u=1; for(unsigned i=1;i<=n;i++) u*=i;
*/  
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define mem(z,i) memset(z,i,sizeof(z))
const int mod=(int)1e9+7;
const long long INF = 1000000000000000000LL;
const int WASTE=(int)2e5;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
    string s;
    int n;
    cin>>s>>n;
    vector<string>v;
    while(n--){
    	string w;
    	cin>>w;
    	if(w==s){
    		cout<<"YES";
    		return 0;
    	}
    	v.push_back(w);
    }
    for(int x=0;x<v.size();x++){
    	string w=v[x]+v[x];
    	if(w[1]==s[0]&&w[2]==s[1]){
    		cout<<"YES"; return 0;
    	}
    	for(int y=x+1;y<v.size();y++){
    		string w=v[x]+v[y];
    		if(w[1]==s[0]&&w[2]==s[1]){
    			cout<<"YES"; return 0;
    		}
    		w=v[y]+v[x];
    		if(w[1]==s[0]&&w[2]==s[1]){
    			cout<<"YES"; return 0;
    		}
    	}
    }
    cout<<"NO";
    return 0;
}