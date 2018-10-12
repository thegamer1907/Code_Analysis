#include<bits/stdc++.h>
#define PI acos(-1.0)
#define pb push_back
#define F first
#define S second
#define debug puts
using namespace std;
typedef long long ll;

const int N=5e5+5;
const int MOD=1e9+7;
const int INF=0x3f3f3f3f;
string s[N];
int check(string s1,string s2){
    for(int i=0;i<s1.size()&&i<s2.size();i++){
        if(s1[i]<s2[i]){
            return i;
        }
        else if(s1[i]>s2[i]&&i>=1)  return -1;
    }
    if(s1.size()==1)    return 1;
    if(s1.size()<s2.size()) return s1.size();
    return -1;
}

int main(void){
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)   cin>>s[i];
    for(int i=n;i>=2;--i){
        int pos=check(s[i],s[i-1]);
        if(pos==-1) continue;
        s[i-1].erase(pos,s[i-1].size()-pos+1);
    }
    for(int i=1;i<=n;i++)
        cout << s[i]<<endl;
    return 0;
}
void bef0re_submit(){
    debug("Make sure the algorithm is right!");
    debug("LONG LONG!!!");
    debug("Check n and m are misuesd???");
    debug("Make sure output format is right/// Yes??YES  (%.20LF)???");
    debug("if all meet,run with special situation!!!");
    debug("I confirm that I have done all above");
}


/*********

*********/
