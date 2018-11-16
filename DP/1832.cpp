#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main(){
    string s;
    cin>>s;
    int n=s.size();
    vector<int> ab;
    vector<int> ba;
    for(int i=0;i<n-1;i++){
        if(s[i]=='A' && s[i+1]=='B') ab.pb(i);
        if(s[i]=='B' && s[i+1]=='A') ba.pb(i);
    }
    if(ab.size()==2 && ba.size()==1 && abs(ab[0]-ba[0])==1 && abs(ab[1]-ba[0])==1) cout<<"NO";
    else if(ab.size()==1 && ba.size()==2 && abs(ab[0]-ba[0])==1 && abs(ab[0]-ba[1])==1) cout<<"NO";
    else if(ab.size()==1 && ba.size()==1 && abs(ab[0]-ba[0])==1) cout<<"NO";
    else if(ab.size()>0 && ba.size()>0) cout<<"YES";
    else cout<<"NO";
    return 0;
}
