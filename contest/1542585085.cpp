#include<iostream>
#include<string>

using namespace std;
string c[100+10];
int main(){
    string s;
    cin>>s;
    int n;
    cin>>n;

    bool ans=false;
    for(int i=0;i<n;i++){
        cin>>c[i];
        if(c[i]==s)
            ans=true;
        if(c[i][0]==s[1]&&c[i][1]==s[0])
            ans=true;

    }
    if(ans){
        cout<<"YES";
        return 0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(c[i][0]==s[1]&&c[j][1]==s[0]){
                cout<<"YES";
                return 0;
            }
            if(c[i][1]==s[0]&&c[j][0]==s[1]){
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}
