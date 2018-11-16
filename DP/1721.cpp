#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(0)
const int mod= 1e9 + 7;
#define Maxm 1000005
#define endl '\n'
#define pb push_back
#define mp make_pair
#define sz(x) ((int)(x).size())
#define ff first
#define ss second
#define pii pair<int,int>
#define vi vector<int>

int main() {
	fastio;
	string s;
	cin>>s;
    bool fab=false;
    bool fba=false;
    int i=0;
	while(i<s.length()-1){
        if(fab){
            if(s[i]=='B' and s[i+1]=='A'){
                fba=true;
                cout<<"YES"<<endl;
                return 0;
            }    
            i++;
        }
        else{
            if(s[i]=='A' and s[i+1]=='B'){
                fab=true;
                i+=2;
            }
            else
                i++;
        }
	}	
    fab=false;
    fba=false;
    i=0;
    while(i<s.length()-1){
        if(fba){
            if(s[i]=='A' and s[i+1]=='B'){
                fab=true;
                cout<<"YES"<<endl;
                return 0;
            }    
            i++;
        }
        else{
            if(s[i]=='B' and s[i+1]=='A'){
                fba=true;
                i+=2;
            }
            else
                i++;
        }
    }
    cout<<"NO"<<endl;
	return 0;
}