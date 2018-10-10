#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int l=s.length(),i,j;
    int * d=new int[l];
    d[0]=0;
    i=1;j=0;
    while(i!=l){
        if(s[i]==s[d[j]]){
            d[i]=d[j]+1;i++;j=i-1;
        }else {
            if(d[j]==0){
                d[i]=0;
                i++;j=i-1;
            }else {
                j=d[j]-1;
            }
        }
    }
    vector<int> v;i=l-1;
    vector<int> x(l,0);
    while(d[i]){
        x[d[i]]++;
        i=d[i]-1;
    }
    for(i=0;i<l-1;i++){
        if(x[d[i]]==1)x[d[i]]=2;
    }
    i=l-1;
    while(d[i]){
        if(x[d[i]]==2){
            cout<<s.substr(0,d[i]);
            return 0;
        }
        i=d[i]-1;
    }
    cout<<"Just a legend";
    return 0;
}