#include <bits/stdc++.h>

using namespace std;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("input.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    int mas[100005];
    string str;
    cin>>str;
    int n;
    cin>>n;
    int y=0;
    for(int i=1;i<str.size();i++){
        if(str[i]==str[i-1])y++;
        mas[i]=y;
    }
    mas[0]=0;
    for(int r=1;r<=n;r++){
        int st,en;
        cin>>st>>en;
        int t=0;
        t=mas[en-1]-mas[st-1];
        cout<<t<<'\n';
    }

}
