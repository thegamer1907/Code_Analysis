#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t;
    cin>>n>>t;
    string str;
    cin.ignore();
    getline(cin, str);
    while(t--){
        for(int i=0;i<n-1;i++){
            if(str[i]=='B'&&str[i+1]=='G'){
                str[i] = 'G';
                str[i+1] = 'B';
                i++;
            }
        }
    }
    cout<<str;
    return 0;
}
