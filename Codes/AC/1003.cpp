#include<bits/stdc++.h>
using namespace std;

int n,k, l=0, r=0, ac=0, bc=0, ans=0;
string s;

int main(){
cin >> n >> k;
cin >> s;
for(int r =0; r<s.size(); r++){
    ++(s[r]=='a'?ac:bc) ;
    if(min(ac,bc)>k){
        while(min(ac,bc)>k){
        --(s[l++]=='a'?ac:bc);}
    }
    ans = max(ac+bc, ans);
}
cout << ans << endl;

return 0;}
