#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,v;cin>> s;
    int a=0, n ,b=0 ;cin>> n;
    for(int i=0 ;i<n ;i++){
        cin>> v;
        if(s==v)
            a++, b++;
        if(v[0]==s[1])
            a++;
        if(v[1]==s[0])
            b++;
        if(a>0 && b>0)
            return cout<<"YES" , 0;
    }
    cout<< "NO";
}
