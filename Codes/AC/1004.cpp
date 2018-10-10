#include<bits/stdc++.h>
using namespace std;

int n, k, l, r, bc=0, fa;


int dp(string s){
    int ans = 0;
    l =0; r= -1;
    bc =0;
    while(++r<s.size()){
        if(s[r]=='a'){
            bc++;
        }
        if(bc>k){
            while(s[l++]=='b');
            bc--;
        }
        ans = max(ans, r-l+1);
    }
    return ans;
}

int main(){
string s;
cin >> n >> k;
cin >> s;
fa=dp(s);
for(int i =0; i<s.size();i++){
    s[i] = (s[i]=='a')?'b':'a';
}
fa = max(fa, dp(s));
cout << fa;

return 0;}
