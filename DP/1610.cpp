#include <bits/stdc++.h>
using namespace std;

const int maxn=500;

int main(){
    string s;
    cin>>s;
    int sz=s.size();
    vector<int> a;
    vector<int> b;
    for(int i=0;i<sz;++i){
        if(s[i]=='A'){
            if(i+1<sz&&s[i+1]=='B'){
                a.push_back(i);
            }
        }else if(s[i]=='B'){
            if(i+1<sz&&s[i+1]=='A'){
                b.push_back(i);
            }
        }
    }
    int sza=a.size();
    int szb=b.size();
    for(int i=0;i<sza;++i){
        for(int j=0;j<szb;++j){
            if(a[i]!=b[j]-1&&a[i]!=b[j]+1){
                printf("YES");
                return 0;
            }
        }
    }
    printf("NO");
    return 0;
}