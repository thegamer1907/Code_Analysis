#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    string s;
    int x=k;
    cin>>s;
    int mx=0;
    int lo=0,hi=0;
    while(hi<n){
        mx=max(mx,hi-lo);
        if(s[hi]=='a')hi++;
        else{
            if(!k){
                if(s[lo]=='b')k++;
                lo++;
            }else{
                if(s[hi]=='b')k--;
                hi++;
            }
        }
    }
    mx=max(mx,hi-lo);
    lo=0,hi=0;
    k=x;
    while(hi<n){
        //cout<<lo<<' '<<hi<<' '<<k<<' '<<s[hi]<<endl;
        mx=max(mx,hi-lo);
        if(s[hi]=='b')hi++;
        else{
            if(!k){
                if(s[lo]=='a')k++;
                lo++;
            }else{
                if(s[hi]=='a')k--;
                hi++;
            }
        }
    }
    mx=max(mx,hi-lo);
    cout<<mx<<endl;
}
