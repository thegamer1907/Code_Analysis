#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int t;
    cin>>t;
    string S;
    cin>>S;
    int i;
    for(int j=1;j<=t;j++){
        for(i=0;i<n;){
            if(S[i]=='B' && S[i+1]=='G'){
                S[i]='G';
                S[i+1]='B';
                i+=2;
            }
            else
                i++;
        }
    }
    cout<<S;
    return 0;
}