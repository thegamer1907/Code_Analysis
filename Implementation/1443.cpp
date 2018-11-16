#include<iostream>
using namespace std;
#define int long long
signed main() {
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    for(int k=0;k<t;k++){
        for(int i=n;i>0;i--){
            if(s[i]=='G' and s[i-1]=='B'){
                s[i]='B';
                s[i-1]='G';
                i--;
            }
        }
    }
    cout<<s;
	return 0;
}