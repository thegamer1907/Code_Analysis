#include <bits/stdc++.h>

#define ll long long
using namespace std;

string com(string s1,string s2){
    string ans="";

    int l=min(int(s1.length()) , int ( s2.length()));

    for(int i=0;i<l;i++){
        if(s1[i]==s2[i]){
            ans.push_back(s1[i]);
        }else if(s1[i]>s2[i]){
            break;
        }else{

            return s1;
        }

    }
    return ans;
}

int main() {


    cin.tie(0);
    cin.sync_with_stdio(0);


    int n;
    cin>>n;

    string ss[n];
    for(int i=0;i<n;i++){
        cin>>ss[i];
    }
    for(int i=n-2;i>=0;i--){
        ss[i]=com(ss[i],ss[i+1]);
    }
    for(string s:ss){
        cout<<s<<endl;
    }


    return 0;
}
