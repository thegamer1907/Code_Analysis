#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=1e5+1010;
const ll mod=1e9+7;

int t;
string tmp,ss;

int main(){
    ios_base::sync_with_stdio(false);
    int f1,f2,f3;
    cin>>tmp;
        cin>>t;
        f1=0; f2=0; f3=0;
        while(t--){
            cin>>ss;
            if(ss[0]==tmp[1]) f1=1;
            if(ss[1]==tmp[0]) f2=1;
            if(ss[0]==tmp[0] && ss[1]==tmp[1]) f3=1;
        }
        if((f3==1)||((f1+f2)==2)) puts("YES");
        else puts("NO");
    return 0;
}
