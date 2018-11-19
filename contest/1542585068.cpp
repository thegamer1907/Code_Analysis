#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p=0;
    string s1;
    vector<string> s2;
    cin>>s1>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s==s1)p=1;
        s2.push_back(s);
    }
    if(p!=1){
        for(int i=0;i<s2.size();i++){
            if(s2[i][1]==s1[0]){
                for(int j=0;j<s2.size();j++){
                    if(s2[j][0]==s1[1]){
                        p=1;
                        break;
                    }
                }
            }
        }
    }
    if(p)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
