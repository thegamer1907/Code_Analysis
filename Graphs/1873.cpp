#include<bits/stdc++.h>
#define b_n binary_search
using namespace std;

int main(){
    int a,b,Count=0;
    cin>>a;
    vector<int>va(a);
    for(int i=0;i<a;i++) cin>>va[i];
    cin>>b;
    vector<int>vb(b);
    for(int i=0;i<b;i++) cin>>vb[i];
    if(a>b){
        sort(va.begin(),va.end());
        sort(vb.begin(),vb.end());
        for(int i=0;i<b;i++){
            if(b_n(va.begin(),va.end(),vb[i]-1)){
                Count++;
                va.erase(lower_bound(va.begin(),va.end(),vb[i]-1));
            }
            else if(b_n(va.begin(),va.end(),vb[i])){
                Count++;
                va.erase(lower_bound(va.begin(),va.end(),vb[i]));
            }
            else if(b_n(va.begin(),va.end(),vb[i]+1)){
                Count++;
                va.erase(lower_bound(va.begin(),va.end(),vb[i]+1));
            }
        }
    }
    else{
        sort(va.begin(),va.end());
        sort(vb.begin(),vb.end());
        for(int i=0;i<a;i++){
            if(b_n(vb.begin(),vb.end(),va[i]-1)){
                Count++;
                vb.erase(lower_bound(vb.begin(),vb.end(),va[i]-1));
            }
            else if(b_n(vb.begin(),vb.end(),va[i])){
                Count++;
                vb.erase(lower_bound(vb.begin(),vb.end(),va[i]));
            }
            else if(b_n(vb.begin(),vb.end(),va[i]+1)){
                Count++;
                vb.erase(lower_bound(vb.begin(),vb.end(),va[i]+1));
            }
        }
    }
    cout<<Count<<endl;
}
