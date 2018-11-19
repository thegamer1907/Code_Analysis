#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <unordered_map>
#include <set>
#include <string>
#include <queue>
#include <string>
#include <cmath>

#define mp make_pair
#define pb push_back
#define N 209
#define lim 15

using namespace std;

set<string> s[N][lim];
string pre[N],suf[N],s1[N]; 

string get_pre(string lol){
    while(lol.size()>lim){
        lol.erase(lol.end()-1);
    }
    return lol;
}

string get_suf(string lol){
    while(lol.size()>lim){
        lol.erase(lol.begin());
    }
    return lol;
}

void calc(string lol,int ind){
    int i,j,t1,t2,t3,t4;
    string temp;
    for(i=0;i<lol.size();i++){
        temp="";
        for(j=i;j<lol.size();j++){
            temp+=lol[j];
            if(temp.size()>lim){
                break;
            }
            s[ind][temp.size()].insert(temp);
        }
    }
}

void merge(int f1,int f2,int curr){
    int i,j,t1,t2,t3,t4;
    for(i=1;i<lim;i++){
        for(auto it : s[f1][i]){
            s[curr][i].insert(it);
        }
        for(auto it : s[f2][i]){
            s[curr][i].insert(it);
        }
    }
    return ;
}

int main() {
    int i,j,t1,t2,t3,t4,n,ans,q,curr;
    string lmao;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        cin>>s1[i];
        pre[i]=get_pre(s1[i]);
        suf[i]=get_suf(s1[i]);
        calc(s1[i],i);
    }
    scanf("%d",&q);
    curr=n;
    while(q--){
        curr++;
        scanf("%d %d",&t1,&t2);
        merge(t1,t2,curr);
        s1[curr]=suf[t1]+pre[t2];
        calc(s1[curr],curr);
        pre[curr]=pre[t1]+pre[t2];
        suf[curr]=suf[t1]+suf[t2];
        pre[curr]=get_pre(pre[curr]);
        suf[curr]=get_suf(suf[curr]);
        ans=1;
        while(s[curr][ans].size()==(1ll<<ans)){
            ans++;
        }
        ans--;
        printf("%d\n",ans);
    }   
    return 0;
}