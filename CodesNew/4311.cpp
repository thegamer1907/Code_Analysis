#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef long double ld;
 
const int N=5e6+10;

int main(){
    //freopen("a.txt", "r", stdin);
    //freopen("answers.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<string> vv;
    for(int i=0;i<n;i++){
        string str; cin>>str;
        vv.push_back(str);
    }
    vector<string> ans;
    ans.push_back(vv.back());
    for(int i=n-2;i>=0;i--){
        string t=ans.back();
        string s=vv[i];
        string r;
        int f= -1;
        int g=0;
        for(int j=0;j<s.length();j++){
            if(s[j]==t[j]){
                r.push_back(s[j]);
            }
            else if(s[j]<t[j]){
                f=j;
                break;
            }
            else{
                g=1;
                ans.push_back(r);
                break;
            }
        }
        if(f+1){
            ans.push_back(s);
        }
        else{
            if(!g)
                ans.push_back(r);
        }
    }
    reverse(ans.begin(),ans.end());
    for(string str:ans)
        cout<<str<<endl;
    return 0;
}