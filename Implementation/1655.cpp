#include<bits/stdc++.h>
#include<limits>
#define ll long long int
using namespace std;

#define go ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)


int main(){
    go;
    string s;cin>>s;
    int i,j,ans = -1,cnt;
    for(i=0;i<s.size()-1;i++){
        cnt=1;
        for(j=i+1;j<s.size();j++){
            if(s[i]==s[j]) cnt++;
            else break;
            if(cnt==7){
                cout<<"YES";
                return 0;
            }
        }

    }
    cout<<"NO";
    return 0;
}
