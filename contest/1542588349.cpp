#include<bits/stdc++.h>
using namespace std;
string s;
bool check(char x,char y, char x1,char y1){
    if((y1==s[0] && x == s[1] ) || (y == s[0] && x1 == s[1])){
            return 1;
            }
    else return 0;
}

int main (){

    int n;
    char a[123],b[123];
    cin>>s;
    cin>>n;
    for(int i = 1; i <= n; i++){
        cin>>a[i]>>b[i];
        if((a[i] == s[0] && b[i]==s[1] )|| (a[i] == s[1] && b[i] == s[0])){
            cout<<"YES";
            return 0;
        }
    }
    for(int i = 1; i < n; i++){
        for(int j = i+1; j <=n ; j++)
        {
            if(check(a[i],b[i],a[j],b[j])) {cout<<"YES"; return 0;}
        }
    }
    cout<<"NO";
}
