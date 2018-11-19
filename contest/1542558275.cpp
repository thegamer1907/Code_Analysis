#include<bits/stdc++.h>
using namespace std;

int main(){
string s;
cin>>s;
int n;
cin>>n;
vector<string> v(n);
for(int i=0;i<n;i++)
{
    cin>>v[i];
if(v[i]==s){
    cout<<"YES";
    return 0;
}}
bool left = false, right = false;
for(int i=0;i<n;i++){
    if(v[i][0]==s[1])
    left=true;
    if(v[i][1]==s[0])
    right=true;
}
if(left && right){
    cout<<"YES";
    return 0;
}
cout<<"NO";
}