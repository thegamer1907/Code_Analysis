#include<bits/stdc++.h>
#define mem(a,b) memset(a,b,sizeof(a))
#define ll long long
#define ull unsigned long long
using namespace std;
const int maxn=1e5;
const int mod=1e9+7;
int n,k,p,x,y,nua,b;
ll a[maxn+5];
char fa[maxn+5];
string s1,s2;
int main(){
    ios::sync_with_stdio(false);
    cin>>s1;
    int n=s1.size();
    int ab1=n,ab2=-1,ba1=n,ba2=-1;
    int cha=0;
    for(int i=0;i<n;i++){
        if(s1[i]=='A'&&s1[i+1]=='B'){
            ab1=min(ab1,i);
            ab2=max(ab2,i);
        }
    }
    for(int i=0;i<n;i++){
        if(s1[i]=='B'&&s1[i+1]=='A'){
            ba1=min(ba1,i);
            ba2=max(ba2,i);
        }
    }
    if(ab1<n&&ba1<n&&ab2>=0&&ba2>=0)cha=max(abs(ba2-ab1),abs(ab2-ba1));
    if(cha>=2)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
