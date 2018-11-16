#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m=9;cin>>n;
    vector<int> t(10);
    vector<int> r;
    for(int i = 1 ; i < 10 ; i ++){
        cin>>t[i];
    }
    for(int i = 9 ; i >= 1 ; i --){
        if(t[i]<t[m])m=i;
    }
    if(t[m]>n){
        cout<<-1;
    }else{
        int rmd=n%t[m];
        int d=0,dist;
        do{
            d=0;
            for(int i = 9 ; i > m ; i --){
                if(t[i]-t[m]<=rmd){
                    d=i;
                    dist=t[i]-t[m];
                    break;
                }
            }
            if(d){
                for(int i = 0 ; i < rmd/dist ; i ++){
                    r.push_back(d);
                }
                rmd%=dist;
            }
        }while(d);
        while(r.size()<n/t[m])r.push_back(m);
        for(int i = 0;  i < r.size() ; i ++)cout<<r[i];
    }
}


//48
//7 100 100 100 100 100 100 9 11
