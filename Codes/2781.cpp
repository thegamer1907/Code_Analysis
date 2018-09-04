#include<bits/stdc++.h>
#define maxn 1000006
using namespace std;
typedef long long ll;
string s;
int Next[maxn];
bool vis[maxn];
void getNext(){
    int i=0,j=-1;
    Next[0]=-1;
    while(i<s.size()){
        if(j==-1||s[i]==s[j]) Next[++i]=++j;
        else j=Next[j];
    }
    for(int i=1;i<s.size();i++) vis[Next[i]]=1; 
} 
int main(){
    cin>>s;
    getNext();
    int t=Next[s.size()];
    bool flag=false;
    while(t>0){
        if(vis[t]){
            flag=1;
            for(int i=0;i<t;i++) printf("%c",s[i]);
            break;
        }
        t=Next[t];
    }
    if(!flag) printf("Just a legend\n");
    return 0;
}