#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    string s;
    cin>>s;
    int n=s.size();
    vector<int> w1,w2;
    for(int i=0;i<n-1;i++){
        if(s[i]=='A' && s[i+1]=='B')w1.push_back(i);
        if(s[i]=='B' && s[i+1]=='A')w2.push_back(i);
    }
    int sz1=w1.size(),sz2=w2.size();
    if(sz1==0 || sz2==0)return cout<<"NO",0;
    if(abs(w1[0]-w2[sz2-1])>1 || abs(w1[sz1-1]-w2[0])>1)cout<<"YES";
    else cout<<"NO";
    return 0;
}