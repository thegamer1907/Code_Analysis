/*#include<bits/stdc++.h>
using namespace std;
char a[2],b[2];
int c;
int ans[1010];
int main(){
    int n;cin>>n;
    while(n--){
        cin>>a>>b>>c;
        if(b[0]=='<'&&b[1]=='=')ans[0]++,ans[c+1]--; ///<=
        else if(b[0]=='<')ans[0]++,ans[c]--;         ///<
        else if(b[0]=='=')ans[c]++,ans[c+1]--;       ///=
        else if(b[0]=='>'&&b[1]=='=')ans[c]++;       ///>=
        else if(b[0]=='>')ans[c+1]++;                ///>
    }
    int MAX=ans[0];
    for(int i=1;i<=1000;i++){
        ans[i]+=ans[i-1];
        MAX=max(MAX,ans[i]);
    }
    cout<<MAX<<endl;
    return 0;
}*/
/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    if(d&1)cout<<b-a<<endl;
    else cout<<a-b<<endl;
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
char c[100010];
int len;
int main(){
    cin>>c;
    len=strlen(c);
    int now=0;
    for(int i=1;i<len;i++){
        if(now){
            if(c[i-1]=='B'&&c[i]=='A'){
                cout<<"YES"<<endl;
                return 0;
            }
        }
        else{
            if(c[i-1]=='A'&&c[i]=='B'){
                now++;
                i++;
            }
        }
    }
    now=0;
    for(int i=1;i<len;i++){
        if(now){
            if(c[i-1]=='A'&&c[i]=='B'){
                cout<<"YES"<<endl;
                return 0;
            }
        }
        else{
            if(c[i-1]=='B'&&c[i]=='A'){
                now++;
                i++;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
