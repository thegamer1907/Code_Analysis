#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cnt=0;
    for (int i=0;i<s.size();++i)
        if (s[i]=='4'||s[i]=='7') cnt++;
    vector<int> a;
    a.clear();
    while (cnt){
        a.push_back(cnt%10);
        cnt/=10;
    }
    if (a.size()==0) {
        cout<<"NO";
        return 0;
    }
    int ok=0;
    for (int i=0;i<a.size();++i) if (a[i]!=4&&a[i]!=7) ok=1;
    if (!ok) cout<<"YES";
    else cout<<"NO";
}
