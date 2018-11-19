#include <bits/stdc++.h>
using namespace std;
set<char> s[26];
vector<char> foundfirst(26,false),foundsecond(26,false);
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
string s1;
string s2;
getline(cin,s1);
long long int t;    cin>>t;     cin.ignore();
while(t--){
    getline(cin,s2);
    s[s2[0]-'a'].insert(s2[1]);
    foundfirst[s2[0]-'a']=true;
    foundsecond[s2[1]-'a']=true;
}
if(foundfirst[s1[1]-'a'] && foundsecond[s1[0]-'a']){
    cout<<"YES";
    return 0;
}
if(s[s1[0]-'a'].find(s1[1])!=s[s1[0]-'a'].end()){
    cout<<"YES";
    return 0;
}
cout<<"NO";
return 0;
}


