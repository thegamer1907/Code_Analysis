#include<bits/stdc++.h>
#define ll int
#define fr(i,a,b) for(i=a;i<=b;i++)
#define S(x) scanf("%d",&x)
#define S2(x,y) scanf("%d%d",&x,&y)
#define SET(x) memset(x,-1,sizeof(x))
#define pb push_back
#define mx 500001
using namespace std;
string s[500000];
int main(){
    ll n,i,j;
    S(n);
    fr(i,0,n-1){
        cin>>s[i];
    }
    for(i=n-1;i>0;i--){
        ll n1=s[i-1].length();
        ll n2=s[i].length();
        bool flag=0;
        fr(j,0,min(n1,n2)-1){
            if(s[i-1][j]!=s[i][j]){
                if(int(s[i-1][j])<int(s[i][j])){flag=1;break;}
                else {s[i-1]=s[i-1].substr(0,j);flag=1;break;}
            }
        }    
        if(!flag){
            n1=min(n1,n2);
            s[i-1]=s[i-1].substr(0,n1);
        }
    }
    fr(i,0,n-1)cout<<s[i]<<"\n";
}