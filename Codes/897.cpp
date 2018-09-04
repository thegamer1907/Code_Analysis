#include<bits/stdc++.h>
#define PI acos(-1.0)
#define pb push_back
#define F first
#define S second
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int N=1e5+5;
const int MOD=1e9+7;
template <class T>
bool sf(T &ret){ //Faster Input
    char c; int sgn; T bit=0.1;
    if(c=getchar(),c==EOF) return 0;
    while(c!='-'&&c!='.'&&(c<'0'||c>'9')) c=getchar();
    sgn=(c=='-')?-1:1;
    ret=(c=='-')?0:(c-'0');
    while(c=getchar(),c>='0'&&c<='9') ret=ret*10+(c-'0');
    if(c==' '||c=='\n'){ ret*=sgn; return 1; }
    while(c=getchar(),c>='0'&&c<='9') ret+=(c-'0')*bit,bit/=10;
    ret*=sgn;
    return 1;
}
char s[N];
int main(void){
    int n,k;
    sf(n),sf(k);
    scanf("%s",s+1);
    int ans=0;
    queue<int> q;
    int cnt=0;
    int st=1;
    for(int i=1;i<=n;i++){
        if(s[i]=='b')   {q.push(i);cnt++;}
        if(cnt>k){
            st=q.front()+1;
            q.pop();
            cnt--;
        }
        ans=max(ans,i-st+1);
//        cout <<i<<" -> "<< ans << endl;
    }
    while(!q.empty())   q.pop();
//    cout <<"here" << endl;
    cnt=0;
    st=1;
    for(int i=1;i<=n;i++){
        if(s[i]=='a')   {q.push(i);cnt++;}
        if(cnt>k){
            st=q.front()+1;
            q.pop();
            cnt--;
        }
        ans=max(ans,i-st+1);
    }
    printf("%d\n",ans);
    return 0;
}
