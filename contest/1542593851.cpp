#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+9;
int main(){
    int n;
    string arr[111],s;
    ios::sync_with_stdio(0);
    while(cin>>s){
        cin>>n;
        bool t=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==s)t=1;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i][1]==s[0]&&arr[j][0]==s[1])t=1;
            }
        }
        if(t)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
