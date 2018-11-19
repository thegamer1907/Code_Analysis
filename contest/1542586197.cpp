#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll mod = 1e9 +7;
const int  N = 1e4+10;
map<char , bool > ted;
int main()
{
    char s0, s1;   int n, t1=0, t=0;   cin>>s0>>s1>>n;
    for(int i=0; i<n; i++){
         char p0, p1; cin>>p0>>p1;
       if(p0==s0 && p1==s1) return cout<<"YES",0;
        if(p0==s1){t++;}
        if(p1==s0){t1++;}
    }
    if(t1>0 && t>0) return cout<<"YES",0;
    return cout<<"NO",0;
}