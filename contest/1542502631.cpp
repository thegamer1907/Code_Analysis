#include<cstdio>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    string password;
    while(cin>>password){
        int n; cin>>n;
        string a[150];
        int flag = 0;
        for(int i = 0;i < n;i ++){
            cin>>a[i];
            if(a[i] == password || (a[i][0] == password[1] && a[i][1] == password[0]))
                flag = 1;
        }
        int s = 0,m = 0;
        for(int i = 0;i < n;i ++){
            if(a[i][1] == password[0]) s = 1;
            else if(a[i][0] == password[1]) m = 1;
        }
        if(s && m) flag = 1;
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}