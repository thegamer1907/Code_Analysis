#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int main(){
    cin>>s1;
    bool f=0;
    int n;
    cin>>n;
    map<char,int>mp1,mp2;
    while(n--){
        cin>>s2;
        if(s1==s2){
            f=1;
        }
        mp1[s2[1]]++;
        mp2[s2[0]]++;
    }
    if(mp1[s1[0]]&&mp2[s1[1]]){
        f=1;
    }

    puts(f?"YES":"NO");
}
