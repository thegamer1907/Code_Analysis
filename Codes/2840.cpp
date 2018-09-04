#include<bits/stdc++.h>
using namespace std;

string s,t;
int pre[1000005];

signed main(){
 //   freopen("input.txt","r",stdin);    
    cin>>s;
    int n = s.length();
    pre[0] = 0;
    int j = 0;
    for(int i = 1; i < n;){
        if(s[i] == s[j]){
            j++;
            pre[i] = j; 
            i++;
        }
        else{
            if(j != 0)
                j = pre[j-1];
            else
                pre[i] = 0, i++;
        }
    }
    int x = pre[n-1];
    while(x > 0){
        for(int i = x; i < n-1; i++){
            if(pre[i] == x){
                cout<<s.substr(0,x);
                return 0;
            }
        }
        x = pre[x-1];
    }
    cout<<"Just a legend";
    return 0;
}