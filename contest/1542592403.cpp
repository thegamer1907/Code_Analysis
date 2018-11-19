#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string pass,s[105];
int main(){
    int n,i;
    cin>>pass>>n;
    for(i=0;i<n;i++)
        cin>>s[i];
    bool flag = false;
    for(i=0;i<n;i++){
        if(s[i][0] == pass[0] && s[i][1] == pass[1] )
            flag =true;
        if(s[i][0] == pass[1] && s[i][1] == pass[0] )
            flag =true;
        for(int j=i+1;j<n;j++){
            if(s[i][1] == pass[0] && s[j][0] == pass[1])
                flag =true;
            if(s[j][1] == pass[0] && s[i][0] == pass[1])
                flag =true;
        }
    }
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";
}

